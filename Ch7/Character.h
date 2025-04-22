#pragma once

#include "Skill.h"
#include "Entity.h"

class Character : public Entity		// Character 객체에 Entity에 있는 내용을 가져온다 (private의 내용은 private에, public의 내용은 public에)
{
private:
	int HP2;

public:


	void UseSkill(Skill& skill);

	void UseHP();
};

