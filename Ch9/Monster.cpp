#include "Monster.h"

void Monster::Attack()
{
	CaculateFinalATK();
	cout << "최종 공격력 : " << FinalATK << endl;
};


void Monster::CaculateFinalATK()
{
	//	몬스터의 최종 공격력 공식
	FinalATK = LV * defaultATK;
}

void Slime::Attack()
{
	Monster::Attack();

	cout << "슬라임의 특수공격!" << endl;
}

void Orc::Attack()
{
	Monster::Attack();

	cout << "오크의 특수능력!" << endl;
}
