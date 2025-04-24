#pragma once

#include <iostream>
using namespace std;

//	���� - ���� ����,����
//	���ʹ� ������ �Ѵ�.
//	������ ���� ��Ģ
//	���� ���ݷ� - 

/*	
*	�������̵� ( override )

	Monster:Attack();
	Slime:Attack();
	Slime ���� ���� Attack, Slime Attack � Attack�� ����ϴ°�?
	�θ��� �Լ��� ��ü�Ѵ�.

	override�� Ű����
*/

/*
*	virtual, override 
*
*	virtual : �� �ڵ尡 ����(����)���� �ʴ´�. ��, ���Ⱑ �ƴ� �ٸ� ������ �� �Լ��� ã�Ƽ� ����϶�.
*	override : ���� �̸��� �Լ��� �ڽſ��� �����ϸ� �θ��� �ڵ尡 ������.

*	Slime, Goblin, Orc  ����� �߰�
	Monster.Attack();
	Slime.Attack();
	Goblin.Attack();
	Orc.Attack();

*	Ȯ�强�� ������ �߻�. ���� �߰��� ������ ������ �߰��� �� ����.

*	override�� Ű���� : ����� �ϴ� �Ǽ��� �������ִ� Ű����
	override�� ���ؼ��� �Լ��� �̸��� ���ƾ��Ѵ�.
*/

class ElementType
{

};

class Monster	//	���� is �Ӽ�? �� No �� ���� has �Ӽ�
{
protected:
	int LV;
	int defaultATK;
	int FinalATK;
	ElementType type;

public:
	Monster() {};
	Monster(int lv, int defaultATK) : LV(lv), defaultATK(defaultATK) {};
	virtual void Attack();
	void CaculateFinalATK();
};

class Slime : public Monster
{
public:
	Slime() {};
	Slime(int lv, int defaultATK) : Monster(lv, defaultATK) {}

public:
	void Attack() override;
};

class Orc : public Monster
{
public:
	Orc() {};
	Orc(int lv, int defaultATK) : Monster(lv, defaultATK) {}

public:
	void Attack() override;
};