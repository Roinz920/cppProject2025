#pragma once

#include "Utility.h"

enum Itemtype
{
	ARMMOR,
	WEAPON,
	USEABLE
};

struct Item
{
	string	name;
	int			price;
	int			quantity;
	Itemtype	type;
	
	// 생성자 - 구조체의 이름과 동일하게 정의
	// 이 구조체를 생성할 때에, 선언과 동시에 함수처럼 작동하게 해주는 코드
	Item(string name, int price, int quantity, Itemtype type)
		: name(name), price(price), quantity(quantity), type(type)	// 맴버 이니셜라이즈(Member Initialize) - 초기화
	{ }
		

	void ShowIteminfo();	
	string ReturnByTypeName();	
};