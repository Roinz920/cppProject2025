#include "Player.h"

void Player::ShowInfo()
{
	cout << "플레이어 좌표 : [ " << PlayerX << "," << PlayerY << " ]" << endl << "플레이어 이름 : " << name << endl;
}

void Player::ChangePos(int x, int y)
{
	PlayerX = x;
	PlayerY = y;
} 
