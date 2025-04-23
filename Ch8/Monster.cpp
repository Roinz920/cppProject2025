#include "Monster.h"

void Attacker::Attack()
{
	cout << "공격" << endl;
}

Attacker* Unit::returnAttacker()
{
	return attacker;
}

void Unit::Attack()
{
	cout << "유닛이 공격한다." << endl;
}

void Unit::UseSkill()
{
	cout << "스킬을 사용한다." << endl;
}

void Probe::Attack()
{
	cout << "소형 타입 공격" << endl;
}

void Zealot::Attack()
{
	cout << "소형 타입 공격(1차)" << endl;
	cout << "소형 타입 공격(2차)" << endl;
}

void Dragoon::Attack()
{
	cout << "중형 타입 공격" << endl;
	cout << "일정 확률로 공격이 빗나감" << endl;
}