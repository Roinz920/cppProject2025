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

void Player::Run()
{
	Runner::Run();
}

void Enemy::Run()
{
}
