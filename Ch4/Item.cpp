#include "Item.h"

/*
*	반환형 객체 이름::함수이름()	// 객체에 들어있는 함수를 정의하는 방법
*/

void Item::ShowIteminfo()
{
	cout << "아이템 이름 : " << name << ", 아이템 타입 : " << ReturnByTypeName() << ", 가격 : " << price << ", 수량 : " << quantity << endl;
}

string Item::ReturnByTypeName()
{
	switch (type)
	{
	case ARMMOR: return "ARMMOR";
	case WEAPON: return "WEAPON";
	case USEABLE: return "USEABLE";
	default: return "Etc";
	}
}
