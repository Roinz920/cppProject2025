#pragma once

// Player, Enemy
#include "Enemy.h"
#include "Player.h"

struct GameManager
{
	Enemy currentEnemy;	// ���� ������ ��� �� ��. enemy�� �����ؼ� ���. ������ ������ ��쿡�� �迭�� Ȱ��
	Player player;
	TurnSystem currentTurnState;
	GameManager(Enemy enemy, Player player) : currentEnemy(enemy), player(player)
	{
		currentTurnState = PLAYERTURN;
	}
	void GameLoop(); // �ٸ� ���� ������ ���� ���

	void Battle();

	void Animation();

	// �÷��̾��� �ൿ
	void PlayerTurn();

	// ������ �ൿ
	void EnemyTurn();

};