#pragma once

#include "Common.h"
#include "Utillity.h"

class Runner
{
private:
	int run;		// 주자의 현재 이동 거리.
	bool IsEnd;		// 주자의 도착 판정
protected:
	int MinSpeed;
	int MaxSpeed;
	string symbol;
public:
	Runner() :run(0), IsEnd(false), MinSpeed(1), MaxSpeed(3), symbol("E") {}
	Runner(string symbol) : run(0), IsEnd(false), MinSpeed(1), MaxSpeed(3), symbol(symbol) {}

	virtual void Run();	// main에서도 사용해야하므로 public:에 생성
	bool CheckEndLine(int length);
};

class Player : Runner
{
private:

public:
	Player() : Runner()
	{
		symbol = "P";
	}
	Player(string symbol) : Runner(symbol) {}

public:
	void Run() override;
	void Upgrade(int )
};

class Enemy : Runner
{
private:

public:
	void Run() override;
};
