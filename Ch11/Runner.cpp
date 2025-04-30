#include "Runner.h"

void Runner::SetMaxSpeed()
{
	// MaxSpeed를 제어해주는 함수
	run += randomUtil::GetrandomInt(MaxSpeed);	//	1. 캐릭터의 최대 속도 설정
	if (run <= MinSpeed)
	{
		run = MinSpeed;
	}
}


void Runner::DrawMoveDistance()
{
	for (int i = 0; i < run; i++)				// 2. 이동한다.
	{
		cout << " ";
	}
}

void Runner::SetShape()
{
	cout << symbol << endl;						// 3. 형태의 구현
}

void Runner::Run()
{
	SetMaxSpeed();		// 변경될 수 있는 함수
	DrawMoveDistance();	// 변경되어서는 안되는 코드
	SetShape();			// 변경될 수 있는 함수	
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
		cout << "최소 속도 1 증가" << endl;
	}
	else if (selectedStat == PlayerStat::MAXSPEED)
	{
		MaxSpeed++;
		cout << "최대 속도 1 증가" << endl;
	}
	else if (selectedStat == PlayerStat::NONE)
	{
		cout << "적용될 스탯 없음" << endl;
	}
}

void Runner::Upgrade(PlayerStat selectedStat, int amount)
{
	if (selectedStat == PlayerStat::MINSPEED)
	{
		AdjustMinSpeed(amount);
		cout << "최소 속도 " << amount << "만큼 증가" << endl;
	}
	else if (selectedStat == PlayerStat::MAXSPEED)
	{
		AdjustMaxSpeed(amount);
		cout << "최대 속도 " << amount << "만큼 증가" << endl;
	}
	else if (selectedStat == PlayerStat::NONE)
	{
		cout << "적용될 스탯 없음" << endl;
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
	int applyMaxSpeed = MaxSpeed + 2;	// 캐릭터 보정 스킬
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
	cout << "유저 정보" << endl;
	cout << "최소 속도 : " << MinSpeed << endl;
	cout << "최대 속도 : " << MaxSpeed << endl;
	cout << "보유 금액 : " << money << endl;
}

void Player::Run()
{
	Runner::Run();
}

void Enemy::Run()
{
}
