#include "Player.h"

void Player::ShowInfo()
{
	cout << "�÷��̾� ��ǥ : [ " << PlayerX << "," << PlayerY << " ]" << endl << "�÷��̾� �̸� : " << name << endl;
}

void Player::ChangePos(int x, int y)
{
	PlayerX = x;
	PlayerY = y;
} 
