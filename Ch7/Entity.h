#pragma once

/*
*	Player ����� ����
*	���Ŀ� Enemy ����� ����.
*	Player�� Enemy ��ü�� �������� �����Ͱ� �ִ�.
*	'���'�� ���� ����.  (inheritance)
*	��� ���� ���������ϴ°�?
	�θ� - �ڽ�

*	Character Ŭ������ Entity Ŭ������ ����ϰ� �ִ�.
*	��, Chracter Ŭ������ Entity�� �ڽ� Ŭ�����̴�.
*	Parent	-	Child
	Base	-	Derived
*/

/*
*	�������� ������
*	protected : �ڽĿ��Դ� �����ְ�, �� �̿ܿ��� ������ ���ϵ��� private���� ó���Ѵ�.
	�θ� �ڽĿ��� ��� �����͸� �Ѱ��ְ� ���� ���� �� ���� ���� ���.
	�θ� �ڱ� �ڽſ��Լ��� ����ϰ� ���� ���� private�� �����ϰ�
	�ڽĿ����� �����ϰ� ���� ���� protected�� �����Ѵ�.
*/

/*
*	1. Enemy�� Player �Ѵ� ü��, ���ݷ�, ������ �������� �Ͻÿ�.
	2. ü���� ����ϴ� �ý����� Entity �������� ���������ϴٸ� private�� ���踦 �Ѵ�.
*/

class Entity
{
private:


protected:
	int HP;
	int ATK;
	int DEF;

public:
	int GetHP();
	int GetATK();
	int GetDEF();

	void SetHP(int value);
	void SetATK(int value);
	void SetDEF(int value);

};

