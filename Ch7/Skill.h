#pragma once

#include <iostream>
using namespace std;

/*
*	A,B ������. 
	A(�����, �ôϾ�), B(����, �ִϾ�)
	A. ĳ����	B. ��ų
*/

/*
*	��ų�� �������Ѵ�.
*	��ü : ����, ����, ����Ʈ
*	��ų.Use�Լ�.	Skill.Use()
*	�� A������. Skill skill; skill.Use();
	
	skill. mana stat effect | ??
*/

/*
* ���� ���� : �ܺο��� �𸣴� ������ ���ܶ�.
* ĸ��ȭ: ����� ������ �� ���γ����� ������ �ʿ� ���� ����� �Լ��� �����ϴ� ��.
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

class Skill		// private�� ������ Ÿ�Ե��� �ܺο��� ����� ���� ���� ������� ����. (���� ����)
{
	Mana mana;
	Stat stat;
	Effect effect;
public:
	
	/// <summary>
	/// ������ ����Ͽ� ������ �޾ƿ� ȿ��(effect)�� ����
	/// </summary>
	void Use();
};

