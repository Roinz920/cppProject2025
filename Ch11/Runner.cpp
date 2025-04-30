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

void Runner::ShowPlayerGameInfo()
{
}

void Runner::Upgrade(PlayerStat selectedStat)
{
	if (selectedStat == PlayerStat::MINSPEED)
	{
		MinSpeed++;
		cout << "�ּ� �ӵ� 1 ����" << endl;
	}
	else if (selectedStat == PlayerStat::MAXSPEED)
	{
		MaxSpeed++;
		cout << "�ִ� �ӵ� 1 ����" << endl;
	}
	else if (selectedStat == PlayerStat::NONE)
	{
		cout << "����� ���� ����" << endl;
	}
}

void Runner::Upgrade(PlayerStat selectedStat, int amount)
{
	if (selectedStat == PlayerStat::MINSPEED)
	{
		AdjustMinSpeed(amount);
		cout << "�ּ� �ӵ� " << amount << "��ŭ ����" << endl;
	}
	else if (selectedStat == PlayerStat::MAXSPEED)
	{
		AdjustMaxSpeed(amount);
		cout << "�ִ� �ӵ� " << amount << "��ŭ ����" << endl;
	}
	else if (selectedStat == PlayerStat::NONE)
	{
		cout << "����� ���� ����" << endl;
	}
}

void Runner::AdjustMinSpeed(int value)
{
	if (MaxSpeed < value)
	{
		value = MaxSpeed;
	}
	MinSpeed += value;
}

void Runner::AdjustMaxSpeed(int value)
{
	if (10 < value)
	{
		value = 10;
	}
	MaxSpeed += value;
}

void Runner::RunnerInitialize()
{
	run = 0;
	IsEnd = false;

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

void Player::ShowPlayerGameInfo()
{
	ConsoleUtil::gotoXY(5, 5);
	cout << "���� ����" << endl;
	cout << "�ּ� �ӵ� : " << MinSpeed << endl;
	cout << "�ִ� �ӵ� : " << MaxSpeed << endl;
	cout << "���� �ݾ� : " << money << endl;
}

void Player::Run()
{
	Runner::Run();
}

void Enemy::Run()
{
}
