#pragma once

#include "Common.h"
#include "Image.h"

enum TurnSystem
{
	PLAYERTURN,
	ENEMYTURN,
	GAMECLEAR,
	GAMEEND
};
enum BattleState
{
	IDLE,
	MOVE,
	BATTLE
};

struct Enemy
{
	int HP;
	int ATK;
	int DEF;
	string Name;
	BattleState battleState;

	char Image[IMAGEHEIGHT][IMAGEWIDTH + 1];

	Enemy(int Hp, int Atk, int Def, string name, char Image[IMAGEHEIGHT][IMAGEWIDTH + 1], BattleState battleState)
		: HP(Hp), ATK(Atk), DEF(Def), Name(name), battleState(battleState)
	{
		for (int y = 0; y < IMAGEHEIGHT; y++)
		{
			for (int x = 0; x < IMAGEWIDTH + 1; x++)
			{
				this->Image[y][x] = Image[y][x];
			}
		}
	}

	// ����� ����
	void ChangeImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1]);
	void ShowImage(int& posX, int& posY);

	// ���ǿ� ���� ���� ����
	bool IsBattle(int x, int y);
	bool IsWalk();
	bool IsIdle();

	// ����� �����Ͽ� �ϳ��� ���ο� ������� ǥ��

	void SetBattleImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1], int& posX, int& posY);
};