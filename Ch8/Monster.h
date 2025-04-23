#pragma once
#include "Common.h"


class Monster
{
};

//	������Ʈ�� �����ϰ� �����ϴ� ���
//	1. �ͼ��� ������ �����´�.
//	2. �ϳ��� �����͸� �����ؼ� ��ü�� ǥ���Ѵ�.

/*
*	virtual Ű���带 ���� �߰��Ͽ� ����ϰų� ������� �ʴ°�?
	�ڵ带 ����ϴ� ��ü�� ����� �߰����� Ư¡�� ���´�. virtual. �Լ� �������̵�

*/

class Attacker
{
private:

public:
	void Attack();
};

class Flyer
{

};

class Unit	//	��� ������ ������ �����Ѱ�? �� �ƴϿ�
{
	Attacker* attacker;
	Flyer* flyer;

	bool isAttackable;

public:
	Unit()
	{
		attacker = new Attacker();
	}
	Unit(bool attackable)
	{
		isAttackable = attackable;
		if (isAttackable)
		{
			attacker = new Attacker();
		}
	}
public:
	Attacker* returnAttacker();

	virtual void Attack();
	virtual void Stop();
	void Move();
	void Patrol();
	void Hold();
	virtual void UseSkill();
};

class UnitManufacturer
{

};

class Nexus : public UnitManufacturer
{

};
class GateWay : public UnitManufacturer
{

};

class Probe : public Unit	// ���δ� �����ΰ�? �� ��
{
private:

public:
	Probe(bool attackable) : Unit(attackable) {}

	void Attack();
	void Stop();
};

class Zealot : public Unit
{
public:
	void Attack();
	void Stop();

};

class Dragoon : public Unit
{
public:
	void Attack();
	void Stop();
};