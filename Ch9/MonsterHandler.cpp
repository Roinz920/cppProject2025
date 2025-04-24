#include "MonsterHandler.h"

void MonsterHandler::BattleWithPlayer(Monster& monster)
{
	//	몬스터들은 관련 정보를 가지고 있다 (슬라임, 오크 등)

	// if(monster == 슬라임)
	if (dynamic_cast<Slime*>(&monster))
	{
		cout << "슬라임과의 전투 진행" << endl;
	}
	
	if (dynamic_cast<Orc*>(&monster))
	{
		cout << "오크와의 전투 진행" << endl;
	}
	
	//	플레이어의 값을 설정
	//	플레이어
	monster.Attack();
}
