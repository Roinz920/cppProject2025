#include "person.h"

/*
*	���� ���� : �������� ���� �״�� �ٸ� ������ �������� ��. �ſ� ������. ũ�Ⱑ ���� �� ���
*	���� ���� : �ּҸ� ���� �Ҵ��ؼ� ���� ������ �����ϴ� ��. ���ο� �޸� ������ �Ҵ� ��.
*/



//		   �齺���� ������ (::)
void Person::Clone(const Person& other)
{
	// ���� ���� -> ���� ����� ��������� ��
	age = other.age;	// ���� ����
	name = new char[strlen(other.name) + 1];	// ���ο� �޸� ���� ����
	strcpy(name, other.name); // ���� ����
}

void Person::Show() const
{
	cout << "���� : " << age << endl;
	cout << "�̸� : " << name << endl;
}
