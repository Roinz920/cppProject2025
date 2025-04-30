// 클래스를 만드는 연습

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
	std::cout << "달리기 게임 코드" << std::endl;


	GameManager game;
	game.Play();

	

}