#include "Monster.h"

void Attacker::Attack()
{
	cout << "����" << endl;
}

Attacker* Unit::returnAttacker()
{
	return attacker;
}

void Unit::Attack()
{
	cout << "������ �����Ѵ�." << endl;
}

void Unit::UseSkill()
{
	cout << "��ų�� ����Ѵ�." << endl;
}

void Probe::Attack()
{
	cout << "���� Ÿ�� ����" << endl;
}

void Zealot::Attack()
{
	cout << "���� Ÿ�� ����(1��)" << endl;
	cout << "���� Ÿ�� ����(2��)" << endl;
}

void Dragoon::Attack()
{
	cout << "���� Ÿ�� ����" << endl;
	cout << "���� Ȯ���� ������ ������" << endl;
}