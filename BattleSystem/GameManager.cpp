#include "GameManager.h"

void GameManager::GameLoop()
{
	while (true)
	{
		Animation();
		if (player.IsBattle() && currentEnemy.IsBattle())
		{
			Battle();
		}
	}
}

void GameManager::Battle()
{
	
	// ������ UI ���
	GoToXY(0, 20);
	cout << "�÷��̾� ����";
	GoToXY(0, 21);
	cout << "HP : " << player.HP;
	GoToXY(0, 22);
	cout << "Attck : " << player.ATK;
	GoToXY(0, 23);
	cout << "Defence : " << player.DEF;

	GoToXY(40, 20);
	cout << "�÷��̾� ����";
	GoToXY(40, 21);
	cout << "HP : " << currentEnemy.HP;
	GoToXY(40, 22);
	cout << "Attck : " << currentEnemy.ATK;
	GoToXY(40, 23);
	cout << "Defence : " << currentEnemy.DEF;

	// �÷��̾��� ���� ���
	if (currentTurnState == PLAYERTURN)
	{
		PlayerTurn();
	}
	else if (currentTurnState == ENEMYTURN)
	{
		EnemyTurn();
	}
	else if (currentTurnState == GAMECLEAR)
	{
		cout << "YOU WIN" << endl;
	}
	else if (currentTurnState == GAMEEND)
	{
		cout << "GAME OVER" << endl;
	}

}

void GameManager::Animation()
{
	system("cls");
	if (player.IsBattle() && currentEnemy.IsBattle())
		player.SetBattleImage(PlayerBattle);
	else
		player.SetBattleImage(PlayerIdle);
	if (currentEnemy.IsBattle())
		currentEnemy.SetBattleImage(SlimeBattle);
	else
		currentEnemy.SetBattleImage(SlimeIdle);
	Sleep(100);
	system("cls");
	player.SetBattleImage(PlayerMove);
	currentEnemy.SetBattleImage(SlimeMove);
	Sleep(100);
	
}

void GameManager::PlayerTurn()
{
	GoToXY(0, 15);
	cout << "[�÷��̾� ��!]" << endl;
	cout << "1. ���� | 2. ��� | 3. ������ ���" << endl;
	int input = 0;
	cin >> input;
	switch (input)
	{
	case 1: cout << "[���� ����]"; currentEnemy.Attacked(player.ATK); break;
	case 2: cout << "[��� ����]"; player.Defence(); break;
	case 3: cout << "[������ ���]"; player.UseItem(5); break;
	default: break;
	}
	currentTurnState = ENEMYTURN;
}

void GameManager::EnemyTurn()
{
	GoToXY(0, 15);
	cout << "[���� ��!]" << endl;

	player.Attacked(player.ATK); 
	_getch(); // ������ ���� Ȯ�ο� ���

	currentTurnState = PLAYERTURN;
}
