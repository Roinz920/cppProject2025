#pragma once

//	������ �����ϴ� ���� | main() ���α׷��� ���� -> ���� ���� -> ���� ����

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

