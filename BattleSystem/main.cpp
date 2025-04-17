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

#include "Enemy.h"

int main()
{
	Enemy Slime(25, 5, 1, "Slime", SlimeIdle);	// ���� ��ü�� ����

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