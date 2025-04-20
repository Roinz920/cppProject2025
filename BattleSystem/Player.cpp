#include "Player.h"

void Player::ChangeImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1])
{
	for (int y = 0; y < IMAGEHEIGHT; y++)
	{
		for (int x = 0; x < IMAGEWIDTH + 1; x++)
		{
			this->Image[y][x] = Image[y][x];
		}
	}
}

void Player::ShowImage()
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

bool Player::IsBattle()
{
	if (posX >= 20)
		return true;
	else
		return false;
}

void Player::SetBattleImage(char Image[IMAGEHEIGHT][IMAGEWIDTH + 1])
{
	ChangeImage(Image);

	// 이동 로직
	if (posX >= 20)
	{
		posX = 20;
	}
	else
	{
		posX++;
	}

	ShowImage();
}

void Player::Attacked(int damage)
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

void Player::Defence()
{
	DEF += 1;
}

void Player::UseItem(int heal)
{
	HP += heal;
}
