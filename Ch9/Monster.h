#pragma once

#include <iostream>
using namespace std;

//	몬스터 - 몬스터 조작,관리
//	몬스터는 공격을 한다.
//	몬스터의 공격 규칙
//	최종 공격력 - 

/*	
*	오버라이드 ( override )

	Monster:Attack();
	Slime:Attack();
	Slime 입장 몬스터 Attack, Slime Attack 어떤 Attack을 사용하는가?
	부모의 함수를 대체한다.

	override의 키워드
*/

/*
*	virtual, override 
*
*	virtual : 이 코드가 실제(존재)하지 않는다. 즉, 여기가 아닌 다른 곳에서 이 함수를 찾아서 사용하라.
*	override : 같은 이름의 함수를 자신에서 선언하면 부모의 코드가 숨겨짐.

*	Slime, Goblin, Orc  등등의 추가
	Monster.Attack();
	Slime.Attack();
	Goblin.Attack();
	Orc.Attack();

*	확장성의 문제가 발생. 새로 추가할 몬스터의 개성을 추가할 수 없다.

*	override의 키워드 : 사람이 하는 실수를 보완해주는 키워드
	override를 위해서는 함수의 이름이 같아야한다.
*/

class ElementType
{

};

class Monster	//	몬스터 is 속성? → No → 몬스터 has 속성
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