#include "Enemy.h"

void Enemy::Attaked()
{
	cout << "���� ����" << endl;
	HP -= 10;
}

void Enemy::Defence()
{
	cout << "��� �ڼ�" << endl;
	DEF += 5;
}

void Enemy::Recovery()
{
	cout << "ȸ����" << endl;
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
	// ���� ���ʰ� ���� �ൿ�� �����մϴ�.
	BehaviorAI();

	// �ൿ�� ���� ����� �����մϴ�.

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
