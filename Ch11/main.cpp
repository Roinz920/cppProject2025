// Ŭ������ ����� ����

#include "Base.h"
#include "Utillity.h"
#include "Runner.h"
#include "GameManager.h"

void ClassDefaultInfo()
{
	Base* base = new Base();
	delete base;

	Base* derived = new Derived();

	derived->Do();

	delete derived;
}

int main()
{
	ClassDefaultInfo();
	system("cls");
	std::cout << "�޸��� ���� �ڵ�" << std::endl;


	GameManager game;
	game.Play();

	

}