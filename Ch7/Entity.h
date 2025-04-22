#pragma once

/*
*	Player 기능을 구현
*	이후에 Enemy 기능을 구현.
*	Player와 Enemy 객체의 공통적인 데이터가 있다.
*	'상속'을 통해 통합.  (inheritance)
*	모든 것을 상속해줘야하는가?
	부모 - 자식

*	Character 클래스가 Entity 클래스를 사용하고 있다.
*	즉, Chracter 클래스가 Entity의 자식 클래스이다.
*	Parent	-	Child
	Base	-	Derived
*/

/*
*	접근제어 지시자
*	protected : 자식에게는 열려있고, 그 이외에는 접근을 못하도록 private으로 처리한다.
	부모가 자식에게 모든 데이터를 넘겨주고 싶지 않을 수 있을 때에 사용.
	부모가 자기 자신에게서만 사용하고 싶은 것을 private로 선언하고
	자식에서도 변경하고 싶은 것은 protected로 선언한다.
*/

/*
*	1. Enemy와 Player 둘다 체력, 공격력, 방어력을 가지도록 하시오.
	2. 체력을 사용하는 시스템을 Entity 공통으로 구현가능하다면 private로 설계를 한다.
*/

class Entity
{
private:


protected:
	int HP;
	int ATK;
	int DEF;

public:
	int GetHP();
	int GetATK();
	int GetDEF();

	void SetHP(int value);
	void SetATK(int value);
	void SetDEF(int value);

};

