#pragma once

#include <iostream>
using namespace std;

class HP
{
private:
	int HP;
	int MaxHP;
	bool isDeath;
public:
	void AttackedBy(int damage);
	void Healed(int heal);
};