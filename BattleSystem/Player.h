#pragma once

#include "Common.h"
#include "Image.h"

struct Player
{
	int HP;
	int ATK;
	int DEF;
	string Name;
	char Image[IMAGEHEIGHT][IMAGEWIDTH + 1];
	BattleState battleState;

	int posX;
	int posY;
	bool isDeath;

	Player(int Hp, int Atk, int Def, string name, char Image[IMAGEHEIGHT][IMAGEWIDTH + 1], BattleState battleState)
		: HP(Hp), ATK(Atk), DEF(Def), Name(name), battleState(battleState)
	{
		posX = 5;
		posY = 5;
		isDeath = false;

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
	void ShowImage();

	// ���ǿ� ���� ���� ����
	bool IsBattle();
	bool IsWalk();
	bool IsIdle();

	// ����� �����Ͽ� �ϳ��� ���ο� ������� ǥ��

	void SetBattleImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1]);

	void Attacked(int damage);
	void Defence();
	void UseItem(int heal);
};