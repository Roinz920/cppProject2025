/*
*	ĸ��ȭ
*	��� - ����� �ڵ带 �ϳ��� ���� �� �ִ�. 
*	����� ���� �ؾ��ϴ°�? "IS-A" "Has-A"
* 
*	����� ����
*/

/*
*	std::cout << " A�� �ó����� n�� �ߵ��Ǹ� Ư��ȿ���� �ߵ��մϴ�."
*	���� �ó���		- 
*	�ó���(����)	- 
*/

#include "MonsterHandler.h"

int main()
{
	MonsterHandler monsterHandler;

	Monster slime2(1, 5);
	Slime slime(2,5);
	Orc orc(4, 10);

	monsterHandler.BattleWithPlayer(slime2);
	monsterHandler.BattleWithPlayer(slime);
	monsterHandler.BattleWithPlayer(orc);
}