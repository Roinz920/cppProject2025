#pragma once

#include <iostream>
using namespace std;

/*
*	A,B 개발자. 
	A(상급자, 시니어), B(신입, 주니어)
	A. 캐릭터	B. 스킬
*/

/*
*	스킬을 만들어야한다.
*	객체 : 마나, 스탯, 이펙트
*	스킬.Use함수.	Skill.Use()
*	→ A개발자. Skill skill; skill.Use();
	
	skill. mana stat effect | ??
*/

/*
* 정보 은닉 : 외부에서 모르는 정보는 숨겨라.
* 캡슐화: 기능을 구현할 때 세부내용을 공개할 필요 없이 사용할 함수만 공개하는 것.
*/

class Mana
{
public :
	void Use();

};

class Stat
{
public :
	void Use();

};

class Effect
{
public:
	void Use();

};

class Skill		// private로 선언한 타입들은 외부에서 사용할 때에 직접 사용하지 말라. (정보 은닉)
{
	Mana mana;
	Stat stat;
	Effect effect;
public:
	
	/// <summary>
	/// 마나를 사용하여 스탯을 받아와 효과(effect)를 발현
	/// </summary>
	void Use();
};

