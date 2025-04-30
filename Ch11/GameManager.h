#pragma once

//	게임을 관리하는 역할 | main() 프로그램의 시작 -> 게임 시작 -> 게임 종료

#include "Runner.h"
#include "Utillity.h"

class GameManager
{
private:
	Player* player;

	void ShowTitle();
	void ShopPhase();
	void GamePhase();
public:
	GameManager()
	{
		player = new Player();
	}

	void Play();
};

