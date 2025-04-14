/*
*	��ǥ	: cpp ���� ȭ�� �����ϱ�
*	����	: Windows.h, GOTXY() �籸��
*	����	: cpp ������� ������ϱ�
*	�̸� : namespace �����غ���
*/

/*
*	�̸� ������ ����� ���� ����
*	1. �ٸ� �� ������Ʈ�� copy paste ��ĥ �� �߻��ϴ� ������ �ּ�ȭ �Ҽ� �ִ�.
*	2. �̸� ������ ������ �̸��� ���ؼ� �ڵ带 �з�ȭ �� �� �ִ�.
*/

/*
*	��ǥ : �÷��̾��� �̵��� �����ڸ� ����Ͽ� �Լ�ȭ �غ���.
*/

#include <iostream>
#include <Windows.h>	// Ŀ���� ��ġ�� �ű�� �Լ� SetCursorPosition
#include <conio.h>		// �Է� ��� �Լ� _getch()
#include <stdlib.h>
#include <string.h>		// ���ڿ��� ����� ���� �ϰ� �ִ� ���̺귯��
#include <iomanip>		// input output manipulate ����� ������ ���� ���̺귯��

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
	//char		ItemName[20];	// std::string �̸��� ũ�⸦ �ڵ����� �Ҵ����ش�.
	std::string Itemname;
	int ItemPrice;
	int ItemQuantity; // Ctrl + R, R : �ϰ� �ٲٱ�
};

// const�� ���? �������� ���? Item ����ü�� ���?
// SetItem(Item1, "Sword", 100)
void MySetItem(Item& ItemStruct)
{
	std::cout << "������ �̸� : " << ItemStruct.Itemname	 << std::endl;
	std::cout << "������ ���� : " << ItemStruct.ItemPrice	 << std::endl;
	std::cout << "������ ��� : " << ItemStruct.ItemQuantity << std::endl;
}

void SetItem(Item& item, const std::string setName, int setPrice, int setQuantity)
{
	item.Itemname		= setName;	// �ܺο��� ������ itemName�� setName���� �������ش�.
	item.ItemPrice		= setPrice;
	item.ItemQuantity	= setQuantity;

}

void SetItem(Item& setItem, const Item& copyItem)	//	Shop�� ������ �׸�
{
	setItem.Itemname		= copyItem.Itemname;
	setItem.ItemPrice		= copyItem.ItemPrice;
	setItem.ItemQuantity	= copyItem.ItemQuantity;
}

//	default �Ű� ���� : �Լ� ȣ�� �ÿ�, �Ű������� �����ϰ� �Է��� ���, �ڵ����� ���Կ����ڰ� �۵��Ѵ�.
//	ShowShop(Shop, 3, 10, 10);
//	shop, length�� default�� �ƴϱ� ������ �պκп� �ۼ��ؾ� �Ѵ�.
void ShowShop(Item shop[], int length, int x = 10, int y = 10)
{
	ConsoleUtil::GoToXY(x, y);
	// #include <iomanip>�� �ִ� ���
	// std::left, right;			// left : ���� ����, right : ������ ����
	// std::setw(����);				// setw(20) : ���ڿ��� ũ��� 20������ �����. ���ڿ��� �� ������ ���鹮�ڷ� ����Ѵ�.
	std::cout	<< std::left << std::setw(20) << "������ �̸�" << "|"
				<< std::setw(10) << "����" << "|"
				<< std::setw(10) << "����" << "|";

	for (int i = 0; i < length; i++)
	{
		//std::cout << "�̸� : " << shop[i].Itemname << ", ���� : "
		ConsoleUtil::GoToXY(x, y+1+i);
		std::cout << std::left << std::setw(20) << shop[i].Itemname << "|" 
			<< std::setw(10) << shop[i].ItemPrice << "|" 
			<< std::setw(10) << shop[i].ItemQuantity << "|" << std::endl;
	}
}


//	Shop �迭, ������ �ε���, Item �迭 �κ��丮
//	copyItem
//	����(Item �迭)�� �ִ� �����͸� �����ؼ�, ������ ������ �迭�� �����´�. �迭�� �����͸� �����Ѵ�.

Item& GetItem(Item shop[], int length, int index)
{
	if (index >= length)
	{
		// �Ǽ� �߻� �ÿ�, ����ó���� ����
		std::cout << "��ϵ��� ���� �������� �����Ͽ� 0��° �������� ��ȯ�˴ϴ�." << std::endl;
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
	std::cout << "������ ����" << std::endl;
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
	std::cout << "�����ϰ� ���� ������ ��ȣ�� �Է��ϼ���" << std::endl;
	int input;
	std::cin >> input;

	AddInventory(Inventory, 3, 0, GetItem(Shop, 3, input - 1));	// �������κ��� �κ��丮�� �������� �߰��ϴ� �ڵ�

	// ���� �����Ͱ� ���������� �ִµ�, ���� ��Ʋ �߿� ������ ���͸� �����Ѵ�.
	

	std::cout << "�κ��丮 ������ Ȯ��" << std::endl;
	std::cout << Inventory[0].Itemname << ", " << Inventory[0].ItemPrice << std::endl;
	_getch();
		
	// ���� 1. 10, 10 ��ǥ�� �÷��̾��� ���� �ؽ�Ʈ ���

	ConsoleUtil::GoToXY(10, 10);
	std::cout << "�÷��̾� ����";

	// ���� 2. 

	char name[10];

	while (true) // c++������ bool.h �� ���� �ʾƵ� true, false ��� ����!
	{
		
		int inputNumber = 0;

		std::cout << "1. ������� �̸��� ���� | 2. �÷��̾��� ���� Ȯ��" << std::endl;
		std::cin >> inputNumber; // c++���� �ּ� ������(&) ����� ������ ���ʿ�����
		if (inputNumber == 1)
		{
			std::cout << "�̸��� �Է����ּ���.";
			std::cin >> name;
		}
		else if (inputNumber == 2)
		{
			ConsoleUtil::GoToXY(10, 10);
			std::cout << "�÷��̾��� ����";
			ConsoleUtil::GoToXY(10, 11);
			std::cout << "�÷��̾��� �̸� : " << name;
			_getch();
		}
		else
		{
			break;
		}
		
		system("cls");

	}

	int x = 0, y = 0;
	while (true) // �÷��̾��� �̵� ����
	{
		system("cls");
		ConsoleUtil::InputPlayerKey(x, y);		
		std::cout << "�÷��̾��� ��ǥ : [ " << x << "," << y << "]" << std::endl;
		ConsoleUtil::GoToXY(x, y);
		std::cout << "��";
		Sleep(100);
	}
}