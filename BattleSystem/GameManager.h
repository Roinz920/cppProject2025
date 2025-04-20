#pragma once

// Player, Enemy
#include "Enemy.h"
#include "Player.h"

struct GameManager
{
	Enemy currentEnemy;	// 지금 전투에 사용 될 적. enemy를 복사해서 사용. 복수의 몬스터일 경우에는 배열로 활용
	Player player;
	TurnSystem currentTurnState;
	GameManager(Enemy enemy, Player player) : currentEnemy(enemy), player(player)
	{
		currentTurnState = PLAYERTURN;
	}
	void GameLoop(); // 다른 게임 로직의 통합 기능

	void Battle();

	void Animation();

	// 플레이어의 행동
	void PlayerTurn();

	// 몬스터의 행동
	void EnemyTurn();

};