/*
*	Common.h 헤더 파일을 만들어서 공통된 라이브러리 추가
*	GoToXY();
*	
*	Player
*	Enemy, Monster, Slime
*	
*	Game, StageManager, MonsterManager (관리자 역할)
*/

/*	
*	전투? (Battle)
*	대상 : Player. Enemy.
*	필요 데이터 - 체력, 공격력, 방어력 or 저항력 등
*	사망 조건 (체력이 0보다 작거나 같을 때)
*	(체력 조작 기능)
*	공격을 받음. 포션을 먹음.
*/

#include "Enemy.h"

int main()
{
	Enemy Slime(25, 5, 1, "Slime", SlimeIdle);	// 몬스터 객체를 생성

	int slimeX = 10;
	int slimeY = 5;

	
	_getch();

	while (true)
	{
		if (Slime.IsBattle(slimeX,slimeY))
			Slime.SetBattleImage(SlimeBattle, slimeX, slimeY);
		else
			Slime.SetBattleImage(SlimeIdle, slimeX, slimeY);
		Sleep(200);
		system("cls");
		Slime.SetBattleImage(SlimeMove, slimeX, slimeY);
		Sleep(200);
		system("cls");
	}

}