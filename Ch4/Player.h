#pragma once

#include "Utility.h"

struct Player
{
	// 플레이어의 좌표 정의
	int PlayerX;
	int PlayerY;
	std::string name;

	void ShowInfo();	
		// 좌표를 기능적으로 함수로 구현
	void ChangePos(int x, int y);
};