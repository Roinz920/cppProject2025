#include "Skill.h"
#include "Money.h"
#include "Character.h"
#include "Enemy.h"

//	A ������ : �ôϾ� �����ڿ��� ���ҵ� ���α׷��� �����ϵ��� ������ ��, ���۵� ���α׷��� �����Ͽ� �����۵��ϵ��� �ϴ� �����
//	�� Player. ���� | skill, Currency
//	B ������		

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