#pragma once

/*
*	A������ (�ôϾ�) - B������ (�ִϾ�)
*	Player ����� �����Ǿ�����
*	B�����ڴ� Player�� �ִ� ���� �����͸� ����ؼ� Enemy�� ���� �ý����� ������ּ���.
	�� A�����ڴ� ���� ����� �ִµ� ������� �����ϰڽ��ϴ�.

	1. �̹� �����Ǿ��ִ� �ڵ带 ����� ������� �����ϴ� �۾�
	2. ����� �ϰ� �ִ� ���� ��ü, ��ü�� ����� ���
*/

#include <iostream>
#include "Entity.h"
using namespace std;

enum BehaviorPattern
{
	AGGRESSIVE, DEFENSIVE, COWARD
};

class Enemy : public Entity
{
private:
	// ��ü �ȿ� ����� ������ Memeber ������� �Ѵ�.

	BehaviorPattern currentPattern;

	//	HP, ATK, DEF�� ����� ���� �ý����� �����Ѵ�.
private:
	void Attaked();
	void Defence();
	void Recovery();
	void BehaviorAI();

public:
	void Action();

};

