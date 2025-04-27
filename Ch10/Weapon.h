#pragma once

#include "Common.h"
class Weapon
{
private: // 멤버 변수
	string name;
	int lv;
	int baseATK;
	int weight;

protected: // 상속받은 자식이 이 기능을 물려받아서 사용할 수 있다.
	int DoUpgrade();
	int FinalATK;
public:	 // 생성자
	Weapon(string name, int base, int weight)
		: name(name), lv(1), baseATK(base), weight(weight) {
	}
	Weapon(string name, int lv, int base, int weight)
		: name(name), lv(lv), baseATK(base), weight(weight) {
	}
public:	// 멤버 함수

	void ShowInfo();
	virtual void Attack();
	virtual void Upgrade();
};

class Spear : public Weapon
{
private:
	int specialAtk;

public:
	Spear(string name, int lv, int base, int weight, int specialAtk)
		: Weapon(name, lv, base, weight), specialAtk(specialAtk) {
	}

public:
	void Attack();
	void Upgrade() override;
};

class Sword : public Weapon
{

public:
	Sword(string name, int lv, int base, int weight)
		: Weapon(name, lv, base, weight) {
	}

public:
	void Attack();
	void Upgrade() override;
};

class Arrow : public Weapon
{
public:
	Arrow(string name, int lv, int base, int weight)
		: Weapon(name, lv, base, weight) {
	}

public:
	void Attack();
	void Upgrade() override;
};