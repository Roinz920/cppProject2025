#include "MonsterHandler.h"

void MonsterHandler::BattleWithPlayer(Monster& monster)
{
	//	���͵��� ���� ������ ������ �ִ� (������, ��ũ ��)

	// if(monster == ������)
	if (dynamic_cast<Slime*>(&monster))
	{
		cout << "�����Ӱ��� ���� ����" << endl;
	}
	
	if (dynamic_cast<Orc*>(&monster))
	{
		cout << "��ũ���� ���� ����" << endl;
	}
	
	//	�÷��̾��� ���� ����
	//	�÷��̾�
	monster.Attack();
}
