#pragma once

#include "Common.h"
#include "Utillity.h"

class Runner
{
private:
	bool IsEnd;		// 주자의 도착 판정
protected:
	int run;		// 주자의 현재 이동 거리.
	int MinSpeed;
	int MaxSpeed;
	string symbol;
	virtual void SetMaxSpeed();
	void DrawMoveDistance();
	virtual void SetShape();
public:
	Runner() :run(0), IsEnd(false), MinSpeed(1), MaxSpeed(3), symbol("E") {}
	Runner(string symbol) : run(0), IsEnd(false), MinSpeed(1), MaxSpeed(3), symbol(symbol) {}

	virtual void Run();	// main에서도 사용해야하므로 public:에 생성
	bool CheckEndLine(int length);
};

class Player : public Runner
{
private:

protected:
	void SetMaxSpeed() override;
	void SetShape() override;

public:
	Player() : Runner()
	{
		symbol = "P";
	}
	Player(string symbol) : Runner(symbol) {}

public:
	void Run() override;
	void Upgrade(int a);
};

class Enemy : public Runner
{
private:

public:
	void Run() override;
};
