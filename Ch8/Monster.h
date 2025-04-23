#pragma once
#include "Common.h"


class Monster
{
};

//	프로젝트를 간단하게 시작하는 방벅
//	1. 익숙한 게임을 가져온다.
//	2. 하나의 데이터를 선택해서 객체로 표현한다.

/*
*	virtual 키워드를 언제 추가하여 사용하거나 사용하지 않는가?
	코드를 상속하는 객체의 기능이 추가적인 특징을 갖는다. virtual. 함수 오버라이딩

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

class Unit	//	모든 유닛은 공격이 가능한가? → 아니오
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

class Probe : public Unit	// 프로는 유닛인가? → 네
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