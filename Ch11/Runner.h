#pragma once

#include "Common.h"
#include "Utillity.h"

enum PlayerStat
{
	MINSPEED, MAXSPEED, NONE, money
};
class Runner
{
private:
	bool IsEnd;		// ������ ���� ����
protected:
	PlayerStat stat;
	int run;		// ������ ���� �̵� �Ÿ�.
	int MinSpeed;
	int MaxSpeed;
	string symbol;
	virtual void SetMaxSpeed();
	void DrawMoveDistance();
	virtual void SetShape();
public:
	Runner() :run(0), IsEnd(false), MinSpeed(1), MaxSpeed(3), symbol("E"), stat(PlayerStat::NONE) {}
	Runner(string symbol) : run(0), IsEnd(false), MinSpeed(1), MaxSpeed(3), symbol(symbol), stat(PlayerStat::NONE) {}

	virtual void Run();	// main������ ����ؾ��ϹǷ� public:�� ����
	bool CheckEndLine(int length);

	virtual void ShowPlayerGameInfo();
	void Upgrade(PlayerStat selectedStat);
	void Upgrade(PlayerStat selectedStat, int amount);

	void AdjustMinSpeed(int value);
	void AdjustMaxSpeed(int value);

	void RunnerInitialize();
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

	void ShowPlayerGameInfo() override;

public:
	void Run() override;
};

class Enemy : public Runner
{
private:

public:
	void Run() override;
};
