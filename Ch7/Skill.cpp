#include "Skill.h"

void Mana::Use()
{
	cout << "마나를 사용합니다." << endl;
}

void Stat::Use()
{
	cout << "스탯을 사용합니다." << endl;
}

void Effect::Use()
{
	cout << "이펙트를 사용합니다." << endl;
}

/* 
	캡슐화 : 기능을 구현할 때에 외부에서 사용자가 몰라도 되는 내용은 하나로 통합하여 하나의 기능으로 표현하는 것

	코드가 실행되어야하는 순서가 존재한다.

	1. 마나가 없으면 스킬을 사용할 수 없다.		- 전제조건
	2. 스탯으로부터 데이터를 받아온다.			- 데이터의 설정
	3. 결과가 출력된다.

*/

void Skill::Use()
{
	mana.Use();
	stat.Use();
	effect.Use();
}
