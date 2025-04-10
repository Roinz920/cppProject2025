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

#include <iostream>
#include <Windows.h>
#include <conio.h>

namespace ConsoleUtil
{
	void GoToXY(int x, int y)
	{
		COORD pos = { x, y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	}
}

int main()
{
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
			
		}
		
		system("cls");

	}
}