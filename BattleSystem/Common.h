#pragma once

#include <iostream>
#include <Windows.h>
#include <time.h>
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;

//	��Ģ�� ����
//	1. �÷��̾��� ���� ������ �ϰ� ���� ������ �� ���� (���� ����)
//	2. ���� ���� ���� ���ΰ�? (���� �켱����, ����) - �÷��̾� �� �� ���� ��
//	3. ������ �¸�, ������ �й� (Ż���� ����)

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

void GoToXY(int x, int y);