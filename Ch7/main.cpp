#include "Skill.h"
#include "Money.h"
#include "Character.h"
#include "Enemy.h"

//	A 개발자 : 시니어 개발자에게 분할된 프로그램을 제작하도록 지시한 후, 제작된 프로그램을 통합하여 정상작동하도록 하는 상급자
//	└ Player. 제작 | skill, Currency
//	B 개발자		

class Player : public Entity
{
private:
	Skill skil;
	Money money;
public:

};
class BattleManager
{
private:
	Player player;
	Enemy enemy;

	bool isEnd;

	void EnemyTurn()
	{
		enemy.Action();
	}
	void PlayerTurn()
	{

	}
public:
	void Battle()
	{
		while (!isEnd)
		{
			PlayerTurn();
			EnemyTurn();
		}
	}

};

class ShopManager
{

};
class MoveManager
{

};

int main()
{
	Skill skill;
	Money money;
	skill.Use();

	Character player1;
}