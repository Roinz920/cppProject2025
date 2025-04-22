#pragma once

/*
*	A개발자 (시니어) - B개발자 (주니어)
*	Player 기능이 구현되어있음
*	B개발자님 Player에 있는 전투 데이터를 사용해서 Enemy의 전투 시스템을 만들어주세요.
	→ A개발자님 통합 기능이 있는데 상속으로 구현하겠습니다.

	1. 이미 구현되어있는 코드를 공통된 기능으로 추출하는 작업
	2. 상속을 하고 있는 공통 객체, 객체를 만드는 방법
*/

#include <iostream>
#include "Entity.h"
using namespace std;

enum BehaviorPattern
{
	AGGRESSIVE, DEFENSIVE, COWARD
};

class Enemy : public Entity
{
private:
	// 객체 안에 선언된 변수는 Memeber 변수라고 한다.

	BehaviorPattern currentPattern;

	//	HP, ATK, DEF를 사용해 전투 시스템을 구현한다.
private:
	void Attaked();
	void Defence();
	void Recovery();
	void BehaviorAI();

public:
	void Action();

};

