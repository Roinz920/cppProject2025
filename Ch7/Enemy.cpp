#include "Enemy.h"

void Enemy::Attaked()
{
	cout << "공격 받음" << endl;
	HP -= 10;
}

void Enemy::Defence()
{
	cout << "방어 자세" << endl;
	DEF += 5;
}

void Enemy::Recovery()
{
	cout << "회복함" << endl;
	HP += 10;
}

void Enemy::BehaviorAI()
{
	int number = 0;

	if (HP > 5)
	{
		currentPattern = AGGRESSIVE;
	}
	else if (HP % 2 == 0)
	{
		currentPattern = DEFENSIVE;
	}
	else 
	{
		currentPattern = COWARD;
	}
}

void Enemy::Action()
{
	// 몬스터 차례가 오면 행동을 선택합니다.
	BehaviorAI();

	// 행동에 따라 기능을 실행합니다.

	switch (currentPattern)
	{
	case AGGRESSIVE:
		Attaked();
		break;
	case DEFENSIVE:
		Defence();
		break;
	case COWARD:
		Recovery();
		break;
	}
}
