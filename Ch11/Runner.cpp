#include "Runner.h"

void Runner::SetMaxSpeed()
{
	// MaxSpeed�� �������ִ� �Լ�
	run += randomUtil::GetrandomInt(MaxSpeed);	//	1. ĳ������ �ִ� �ӵ� ����
	if (run <= MinSpeed)
	{
		run = MinSpeed;
	}
}

void Runner::DrawMoveDistance()
{
	for (int i = 0; i < run; i++)				// 2. �̵��Ѵ�.
	{
		cout << " ";
	}
}

void Runner::SetShape()
{
	cout << symbol << endl;						// 3. ������ ����
}

void Runner::Run()
{
	SetMaxSpeed();		// ����� �� �ִ� �Լ�
	DrawMoveDistance();	// ����Ǿ�� �ȵǴ� �ڵ�
	SetShape();			// ����� �� �ִ� �Լ�	
}

bool Runner::CheckEndLine(int length)
{
	if (run >= length)
	{
		IsEnd = true;
	}
	else
	{
		IsEnd = false;
	}
	return IsEnd;
}

void Player::SetMaxSpeed()
{
	int applyMaxSpeed = MaxSpeed + 2;	// ĳ���� ���� ��ų
	run += randomUtil::GetrandomInt(MaxSpeed);
}

void Player::SetShape()
{
	int percent = randomUtil::GetrandomInt(100);

	if (percent > 50)
	{
		cout << "~" << symbol << endl;

	}
	else
	{
		cout << symbol << endl;
	}
}

void Player::Run()
{
	Runner::Run();
}

void Enemy::Run()
{
}
