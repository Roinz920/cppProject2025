#pragma once

#include "Common.h"
#include "Utillity.h"

class Runner
{
private:
	int run;		// ������ ���� �̵� �Ÿ�.
	bool IsEnd;		// ������ ���� ����
protected:
	int MinSpeed;
	int MaxSpeed;
	string symbol;
public:
	Runner() :run(0), IsEnd(false), MinSpeed(1), MaxSpeed(3), symbol("E") {}
	Runner(string symbol) : run(0), IsEnd(false), MinSpeed(1), MaxSpeed(3), symbol(symbol) {}

	virtual void Run();	// main������ ����ؾ��ϹǷ� public:�� ����
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
