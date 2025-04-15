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
	
	// ������ - ����ü�� �̸��� �����ϰ� ����
	// �� ����ü�� ������ ����, ����� ���ÿ� �Լ�ó�� �۵��ϰ� ���ִ� �ڵ�
	Item(string name, int price, int quantity, Itemtype type)
		: name(name), price(price), quantity(quantity), type(type)	// �ɹ� �̴ϼȶ�����(Member Initialize) - �ʱ�ȭ
	{ }
		

	void ShowIteminfo();	
	string ReturnByTypeName();	
};