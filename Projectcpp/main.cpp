/*
*	Date : 2025-04-10
	Name : ������
	Subject :C���� C++ ����� �������� ������
*/

// # ������ #
// 1. �⺻�� ������ ��ġ
// 2. ����, �ݺ���(for, while), ��� (if, switch)
// 3. �迭, �Լ�
// 3. ������, ����ü, ���� �����

// # ������ #
// 1. ����� ����ϴ� �Լ� ���� (������)
// 2. ����ü ���� �̸����θ� ������ �Ͽ��� �ȴ�.
// 3. �Լ� ��� �߰� (�����ε�, ����Ʈ ������)
// 4. ��ü(calss) ���� ���α׷���

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // c������ �� ��� ����� ������ �� ��
#include <iostream> //  cpp ������ ����� ���̺귯��

int main()
{
	//ĳ���� �̸� �Է� �� ���
	char name[20];// ���� ��� ���

	printf("c ����� �ڵ�\n");
	printf("ĳ���� �̸��� �Է��ϼ���\n");
	scanf("%s", name);
	printf("ĳ���� �̸� : %s\n\n", name);

	// cpp ����� style
	std::cout << "cpp ����� �ڵ�" << std::endl;
	std::cout << "�̸��� �Է����ּ���." << std::endl;
	std::cin >> name;
	std::cout << "ĳ���� �̸� :" << name << std::endl;

	// ���ο� ���� (cpp)
	// 1. �̸�::								- namespace 
	// 2. printf("%s",name)	�� cout << name		- ������ �����ε�
	// 3. ���๮�� \n		�� std::endl
}