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
	
	// 전투의 UI 출력
	GoToXY(0, 20);
	cout << "플레이어 정보";
	GoToXY(0, 21);
	cout << "HP : " << player.HP;
	GoToXY(0, 22);
	cout << "Attck : " << player.ATK;
	GoToXY(0, 23);
	cout << "Defence : " << player.DEF;

	GoToXY(40, 20);
	cout << "플레이어 정보";
	GoToXY(40, 21);
	cout << "HP : " << currentEnemy.HP;
	GoToXY(40, 22);
	cout << "Attck : " << currentEnemy.ATK;
	GoToXY(40, 23);
	cout << "Defence : " << currentEnemy.DEF;

	// 플레이어의 조작 기능
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
	cout << "[플레이어 턴!]" << endl;
	cout << "1. 공격 | 2. 방어 | 3. 아이템 사용" << endl;
	int input = 0;
	cin >> input;
	switch (input)
	{
	case 1: cout << "[공격 진행]"; currentEnemy.Attacked(player.ATK); break;
	case 2: cout << "[방어 진행]"; player.Defence(); break;
	case 3: cout << "[아이템 사용]"; player.UseItem(5); break;
	default: break;
	}
	currentTurnState = ENEMYTURN;
}

void GameManager::EnemyTurn()
{
	GoToXY(0, 15);
	cout << "[적군 턴!]" << endl;

	player.Attacked(player.ATK); 
	_getch(); // 컴파일 여부 확인용 대기

	currentTurnState = PLAYERTURN;
}
