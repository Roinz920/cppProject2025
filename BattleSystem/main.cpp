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

#include "GameManager.h"

int main()
{
	
	Enemy Slime(25, 5, 1, "Slime", SlimeIdle, IDLE);	// 몬스터 객체를 생성
	Player player(50, 7, 3, "Player", PlayerIdle, IDLE);
	GameManager Game(Slime, player);	

	// int slimeX = 10;
	// int slimeY = 5;

	
	// _getch(); // 컴파일 여부 확인용 대기

	Game.GameLoop();

	//while (true)
	//{
	//	if (Game.player.IsBattle() && Game.currentEnemy.IsBattle())
	//		Game.player.SetBattleImage(PlayerBattle);
	//	else
	//		Game.player.SetBattleImage(PlayerIdle);
	//	if (Game.currentEnemy.IsBattle())
	//		Game.currentEnemy.SetBattleImage(SlimeBattle);
	//	else
	//		Game.currentEnemy.SetBattleImage(SlimeIdle);
	//	Sleep(200);
	//	system("cls");
	//	Game.player.SetBattleImage(PlayerMove);
	//	Game.currentEnemy.SetBattleImage(SlimeMove);
	//	Sleep(200);
	//	system("cls");
	//}

}