/*
*	목표	: cpp 게임 화면 구성하기
*	복슴	: Windows.h, GOTXY() 재구현
*	입출	: cpp 방식으로 입출력하기
*	이름 : namespace 응용해보기
*/

/*
*	이름 공간을 사용할 때의 장점
*	1. 다른 두 프로젝트를 copy paste 합칠 때 발생하는 문제를 최소화 할수 있다.
*	2. 이름 공간에 쓰여진 이름을 통해서 코드를 분류화 할 수 있다.
*/

/*
*	목표 : 플레이어의 이동을 참조자를 사용하여 함수화 해보기.
*/

#include <iostream>
#include <Windows.h>	// 커서의 위치를 옮기는 함수 SetCursorPosition
#include <conio.h>		// 입력 대기 함수 _getch()
#include <stdlib.h>
#include <string.h>		// 문자열의 기능을 포함 하고 있는 라이브러리
#include <iomanip>		// input output manipulate 입출력 조작을 위한 라이브러리

namespace ConsoleUtil
{
	void GoToXY(int x, int y)
	{
		COORD pos = { x, y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	}

	void InputPlayerKey(int& x, int& y)
	{
		if (_kbhit())
		{
			if (GetAsyncKeyState(VK_LEFT))
			{
				x--;
				if (x < 0)
				{
					x = 0;
				}
			}
			else if (GetAsyncKeyState(VK_RIGHT))
			{
				x++;
				if (x > 30)
				{
					x = 30;
				}
			}
			else if (GetAsyncKeyState(VK_UP))
			{
				y--;
				if (y < 0)
				{
					y = 0;
				}
			}
			else if (GetAsyncKeyState(VK_DOWN))
			{
				y++;
				if (y > 30)
				{
					y = 30;
				}
			}
		}
	}
}

struct Item
{
	//char		ItemName[20];	// std::string 이름의 크기를 자동으로 할당해준다.
	std::string Itemname;
	int ItemPrice;
	int ItemQuantity; // Ctrl + R, R : 일괄 바꾸기
};

// const의 사용? 참조자의 사용? Item 구조체의 사용?
// SetItem(Item1, "Sword", 100)
void MySetItem(Item& ItemStruct)
{
	std::cout << "아이템 이름 : " << ItemStruct.Itemname	 << std::endl;
	std::cout << "아이템 가격 : " << ItemStruct.ItemPrice	 << std::endl;
	std::cout << "아이템 재고 : " << ItemStruct.ItemQuantity << std::endl;
}

void SetItem(Item& item, const std::string setName, int setPrice, int setQuantity)
{
	item.Itemname		= setName;	// 외부에서 가져온 itemName을 setName으로 설정해준다.
	item.ItemPrice		= setPrice;
	item.ItemQuantity	= setQuantity;

}

void SetItem(Item& setItem, const Item& copyItem)	//	Shop의 아이템 항목
{
	setItem.Itemname		= copyItem.Itemname;
	setItem.ItemPrice		= copyItem.ItemPrice;
	setItem.ItemQuantity	= copyItem.ItemQuantity;
}

//	default 매개 인자 : 함수 호출 시에, 매개변수를 부족하게 입력할 경우, 자동으로 대입연산자가 작동한다.
//	ShowShop(Shop, 3, 10, 10);
//	shop, length는 default가 아니기 때문에 앞부분에 작성해야 한다.
void ShowShop(Item shop[], int length, int x = 10, int y = 10)
{
	ConsoleUtil::GoToXY(x, y);
	// #include <iomanip>에 있는 기능
	// std::left, right;			// left : 왼쪽 정렬, right : 오른쪽 정렬
	// std::setw(정수);				// setw(20) : 문자열의 크기로 20공간을 만든다. 문자열의 빈 공간은 공백문자로 출력한다.
	std::cout	<< std::left << std::setw(20) << "아이템 이름" << "|"
				<< std::setw(10) << "가격" << "|"
				<< std::setw(10) << "수량" << "|";

	for (int i = 0; i < length; i++)
	{
		//std::cout << "이름 : " << shop[i].Itemname << ", 가격 : "
		ConsoleUtil::GoToXY(x, y+1+i);
		std::cout << std::left << std::setw(20) << shop[i].Itemname << "|" 
			<< std::setw(10) << shop[i].ItemPrice << "|" 
			<< std::setw(10) << shop[i].ItemQuantity << "|" << std::endl;
	}
}


//	Shop 배열, 선택할 인덱스, Item 배열 인벤토리
//	copyItem
//	상점(Item 배열)에 있는 데이터를 복사해서, 유저의 아이템 배열레 가져온다. 배열의 데이터를 변경한다.

Item& GetItem(Item shop[], int length, int index)
{
	if (index >= length)
	{
		// 실수 발생 시에, 예외처리를 위함
		std::cout << "등록되지 않은 아이템을 선택하여 0번째 아이템이 반환됩니다." << std::endl;
		return shop[0];
	}
	return shop[index];
}

void AddInventory(Item inventory[], int length, int index, const Item& buyItem)
{
	inventory[index].Itemname = buyItem.Itemname;
	inventory[index].ItemPrice = buyItem.ItemPrice;
	inventory[index].ItemQuantity = buyItem.ItemQuantity;

}

int main()
{
	std::cout << "아이템 예제" << std::endl;
	Item ItemA;
	Item ItemB;
	Item ItemC;

	
	SetItem(ItemA, "Apple", 100, 10);
	SetItem(ItemB, "Banana", 150, 3);
	SetItem(ItemC, "Potion", 250, 4);
	//MySetItem(ItemA);
	//MySetItem(ItemB);
	Item Shop[3] = { ItemA, ItemB, ItemC };

	Item Inventory[3];
	ShowShop(Shop, 3, 0,0);
	std::cout << "구매하고 싶은 아이템 번호를 입력하세요" << std::endl;
	int input;
	std::cin >> input;

	AddInventory(Inventory, 3, 0, GetItem(Shop, 3, input - 1));	// 상점으로부터 인벤토리에 아이템을 추가하는 코드

	// 몬스터 데이터가 여러가지가 있는데, 현재 배틀 중에 등장할 몬스터를 선택한다.
	

	std::cout << "인벤토리 아이템 확인" << std::endl;
	std::cout << Inventory[0].Itemname << ", " << Inventory[0].ItemPrice << std::endl;
	_getch();
		
	// 예제 1. 10, 10 좌표에 플레이어의 정보 텍스트 출력

	ConsoleUtil::GoToXY(10, 10);
	std::cout << "플레이어 정보";

	// 예제 2. 

	char name[10];

	while (true) // c++에서는 bool.h 를 넣지 않아도 true, false 사용 가능!
	{
		
		int inputNumber = 0;

		std::cout << "1. 사용자의 이름을 변경 | 2. 플레이어의 정보 확인" << std::endl;
		std::cin >> inputNumber; // c++에서 주소 연산자(&) 사용의 구분이 불필요해짐
		if (inputNumber == 1)
		{
			std::cout << "이름을 입력해주세요.";
			std::cin >> name;
		}
		else if (inputNumber == 2)
		{
			ConsoleUtil::GoToXY(10, 10);
			std::cout << "플레이어의 정보";
			ConsoleUtil::GoToXY(10, 11);
			std::cout << "플레이어의 이름 : " << name;
			_getch();
		}
		else
		{
			break;
		}
		
		system("cls");

	}

	int x = 0, y = 0;
	while (true) // 플레이어의 이동 구현
	{
		system("cls");
		ConsoleUtil::InputPlayerKey(x, y);		
		std::cout << "플레이어의 좌표 : [ " << x << "," << y << "]" << std::endl;
		ConsoleUtil::GoToXY(x, y);
		std::cout << "★";
		Sleep(100);
	}
}