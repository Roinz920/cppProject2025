#include "Item.h"

/*
*	��ȯ�� ��ü �̸�::�Լ��̸�()	// ��ü�� ����ִ� �Լ��� �����ϴ� ���
*/

void Item::ShowIteminfo()
{
	cout << "������ �̸� : " << name << ", ������ Ÿ�� : " << ReturnByTypeName() << ", ���� : " << price << ", ���� : " << quantity << endl;
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
