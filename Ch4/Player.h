#pragma once

#include "Utility.h"

struct Player
{
	// �÷��̾��� ��ǥ ����
	int PlayerX;
	int PlayerY;
	std::string name;

	void ShowInfo();	
		// ��ǥ�� ��������� �Լ��� ����
	void ChangePos(int x, int y);
};