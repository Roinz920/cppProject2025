#pragma once

#include "Skill.h"
#include "Entity.h"

class Character : public Entity		// Character ��ü�� Entity�� �ִ� ������ �����´� (private�� ������ private��, public�� ������ public��)
{
private:
	int HP2;

public:


	void UseSkill(Skill& skill);

	void UseHP();
};

