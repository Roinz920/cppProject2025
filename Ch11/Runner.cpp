#include "Runner.h"

void Runner::Run()
{
	// MaxSpeed를 제어해주는 함수
	run += randomUtil::GetrandomInt(MaxSpeed);
	
	if (run <= MinSpeed)
	{
		run = MinSpeed;
	}
	for (int i = 0; i < run; i++)
	{
		cout << " ";
	}
	cout << symbol << endl;
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

void Player::Run()
{
	Runner::Run();
}
