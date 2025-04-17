#pragma once


#include "Common.h"

// �̸��� Person�� ����ü - ����, �̸�

/*
*	C�� C++�� ������3. �޸� ���� �Ҵ� (���� �޸𸮸� �Ҵ��ϴ� ��)
* 
*										�Ҵ��� ũ��
*	malloc (memory allocate) : malloc(sizedof(char)*10);
*	free (���� �̸�);
* 
*	new		: cpp�� ���� �Ҵ� Ű����
*	delete	: cpp���� �޸𸮸� �����ϴ� Ű����
*/

/*
*	������ : ��ü�� �����͸� ������ �� �ʱ�ȭ ���ִ� ���
*	�Ҹ��� : ��ü�� �Ҹ��� �� �ڵ����� ȣ��Ǵ� ���
*/

/*
*	age, name; ange = 20; name = "���谡";
*	age(agestr) - age�� �ܺο��� ������ ����(agestr)�� �־��; , 
*	name(namestr)
*	�ּ� - �ּ�;	�ּҿ� �ܺο��� ������ �ּҸ� �־�� �ع��� �߻� -> �߰�ȣ ���� ���� �ʿ�
*/

struct Person 
{
	int age;
	char* name;			// ������ ������ ����. �ּҷ� �����Ͽ��� ������ �޸𸮿� �����Ǿ����� �ʴ�.
	string sName;

	// ����Ʈ ������
	Person() {}

	// ���� ������ ���ڿ� �ʱ�ȭ ���
	Person(int age, const string& sName) : age(age), sName(sName) {}

	Person(int age)
	{
		this->age = age;
	}

	// ������ �����ε�
	//		��Ұ�ȣ �ȿ� �ִ� ���� �ܺο��� �������� ������
	Person(int agestr, const char* namestr) : age(agestr)
	{
		// �޸� ������ ���� ��������� ��
		name = new char[strlen(namestr) + 1];	// strlen : string�� length�� Ȯ���ϴ� �ڵ�. 
		// ���� ������ ������ �ܺο� �ִ� �����͸� �����ؼ� �Űܿ;� ��
		strcpy(name, namestr);	
	}

	//	�Ҹ��� : ��ü�� �Ҹ�� ���� �ڵ����� ȣ��ȴ�.
	~Person()
	{
		cout << "Person�� �Ҹ��� ȣ�� ��" << endl;
		delete[] name;
	}

	void Clone(const Person& other);

	void Show() const;	// ��ü �ȿ� �ִ� �����͸� ���� ���� ����ϰڴٰ� ����ڿ��� �˷��ִ� ��. Show() �Լ� �ȿ��� age ���� �ٲٷ��� �Ѵٸ�, ������ �߻�
};