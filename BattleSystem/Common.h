#pragma once

#include <iostream>
#include <Windows.h>
#include <time.h>
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;

//	규칙의 설정
//	1. 플레이어의 턴은 적군의 턴과 같이 존재할 수 없다 (턴제 게임)
//	2. 누가 턴을 가질 것인가? (턴의 우선순위, 조건) - 플레이어 턴 → 몬스터 턴
//	3. 게임의 승리, 게임의 패배 (탈출의 조건)

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