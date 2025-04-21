#include "HP.h"

void HP::AttackedBy(int damage)
{
	if (damage < 0)
	{
		cout << "피해량이 음수가 될 수 없습니다." << endl;
	}
	HP -= damage;
	if (HP <= 0)
	{
		isDeath = true;
	}

}

void HP::Healed(int heal)
{
	if (HP > MaxHP)
	{
		HP = MaxHP;
		return;
	}
	//(아이템의 갯수 감소)
	HP += heal;

}
