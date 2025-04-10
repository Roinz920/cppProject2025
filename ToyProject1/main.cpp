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
			
		}
		
		system("cls");

	}
}