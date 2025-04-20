#include "Enemy.h"

void Enemy::ChangeImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1])
{
	for (int y = 0; y < IMAGEHEIGHT; y++)
	{
		for (int x = 0; x < IMAGEWIDTH + 1; x++)
		{
			this->Image[y][x] = Image[y][x];
		}
	}
}

void Enemy::ShowImage()
{
	for (int y = 0; y < IMAGEHEIGHT; y++)
	{
		for (int x = 0; x < IMAGEWIDTH; x++)
		{
			// GoToXY
			GoToXY(posX + x, posY + y);
			cout << Image[y][x];
		}
		cout << endl;
	}
}

bool Enemy::IsBattle()
{
	if (posX <= 40)
		return true;
	else
		return false;
	
}

void Enemy::SetBattleImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1])
{
	ChangeImage(Image);
	
	// �̵� ����
	if (posX <= 40)
	{
		posX = 40;
	}
	else
	{
		posX--;
	}

	ShowImage();
}

void Enemy::Attacked(int damage)
{
	// ������ ���� ��Ģ
	damage = damage - DEF;
	if (damage <= 0)
	{
		damage = 1;
	}

	// ������ ���� ��Ģ
	HP -= damage;

	// ��� ����
	if (HP <= 0)
	{
		isDeath = true;
	}
}
