/*
*	Common.h ��� ������ ���� ����� ���̺귯�� �߰�
*	GoToXY();
*	
*	Player
*	Enemy, Monster, Slime
*	
*	Game, StageManager, MonsterManager (������ ����)
*/

/*	
*	����? (Battle)
*	��� : Player. Enemy.
*	�ʿ� ������ - ü��, ���ݷ�, ���� or ���׷� ��
*	��� ���� (ü���� 0���� �۰ų� ���� ��)
*	(ü�� ���� ���)
*	������ ����. ������ ����.
*/

#include "GameManager.h"

int main()
{
	
	Enemy Slime(25, 5, 1, "Slime", SlimeIdle, IDLE);	// ���� ��ü�� ����
	Player player(50, 7, 3, "Player", PlayerIdle, IDLE);
	GameManager Game(Slime, player);	

	// int slimeX = 10;
	// int slimeY = 5;

	
	// _getch(); // ������ ���� Ȯ�ο� ���

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