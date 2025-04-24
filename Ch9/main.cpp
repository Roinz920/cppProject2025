/*
*	캡슐화
*	상속 - 공통된 코드를 하나로 묶을 수 있다. 
*	상속을 언제 해야하는가? "IS-A" "Has-A"
* 
*	상속의 장점
*/

/*
*	std::cout << " A의 시너지가 n개 발동되면 특수효과가 발동합니다."
*	게임 시너지		- 
*	시너지(공통)	- 
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