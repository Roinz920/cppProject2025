#include "Monster.h"

void Monster::Attack()
{
	CaculateFinalATK();
	cout << "���� ���ݷ� : " << FinalATK << endl;
};


void Monster::CaculateFinalATK()
{
	//	������ ���� ���ݷ� ����
	FinalATK = LV * defaultATK;
}

void Slime::Attack()
{
	Monster::Attack();

	cout << "�������� Ư������!" << endl;
}

void Orc::Attack()
{
	Monster::Attack();

	cout << "��ũ�� Ư���ɷ�!" << endl;
}
