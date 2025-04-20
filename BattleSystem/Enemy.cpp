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
	
	// 이동 로직
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
	// 데미지 감소 규칙
	damage = damage - DEF;
	if (damage <= 0)
	{
		damage = 1;
	}

	// 데미지 최종 규칙
	HP -= damage;

	// 사망 판정
	if (HP <= 0)
	{
		isDeath = true;
	}
}
