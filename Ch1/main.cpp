#include <iostream>	//����� �Լ� ����� ���� cpp ���̺귯��

/*
*	cpp�� �߰��� ������ �����Ѵ�
*	1. std:: �м�
*	2. �ڵ忡�� "std::"�� ��������
*	3. ��� : '�ĺ��� "cout"�� ���̵Ǿ� ���� �ʽ��ϴ�.
*	��	Q.] iostream�� �߰��ߴµ� �� cout�� ã�� �� ���°���?
*		A.] "cout"�� Ư���� ������ �����ϱ� ������ ã�� �� ����
*		Q2.] �� Ư���� ������ ��� ����ؾ� �ұ��?\
*		A2.] namespace�� ���� ���ذ� �ʿ��մϴ�.
*/

//	Aȸ�� ACOM, Bȸ�� BCOM
//	ACOM���� ���� goods, BCom���� ���� goods
//	������ : Ư�� Ű������ �̸����� ���ٸ� ��ǻ�Ͱ� �����ؼ� �Ǻ��� �� ����. (���� �߻�)
//	������ �̸� �տ� �̸� ������ �߰����ش�.


namespace ACOM
{
	char goods[10];
	int sum;
}

namespace BCOM
{
	char goods[10];
	int sum;
}

int main()
{
	std::cout << "Ch1" << std::endl;
	std::cout << "������ : �̸� ����(namespace)�� ���� ����" << std::endl;

	//	�̸� ������ ù��° ����
	//	���� �̸��� ������ ����ϴ� ������ �߰���
	//	���� : �̸�::����;


	std::cin >> ACOM::goods;
	std::cout << "Aȸ���� ��ǰ �̸� : " << ACOM::goods << std::endl;

	std::cin >> BCOM::goods;
	std::cout << "Bȸ���� ��ǰ �̸� : " << BCOM::goods << std::endl;

	//	����1. ���ڸ� 5�� �Է��� �޾Ƽ� Aȸ���� �հ踦 ������ ����, ���ڸ� 5�� �Է� �޾Ƽ� Bȸ���� �հ迡�� ������ ���ּ���.
	//	Aȸ�� Bȸ�� �հ� ���� �̸��� int sum���� �����ϰ� �ۼ�

	//	1. std::cin int �� �Է¹ޱ�
	//	2. for �ݺ��� 5ȸ
	//	3. �̸� ������ sum ������ �����ϰ� ����ϱ� 

	int number;

	for (int i = 0; i < 5; i++)
	{
		std::cout << i + 1 << " Aȸ�� ��ǰ ���� �Է� :" << std::endl;
		std::cin >> number;
		ACOM::sum += number;
	}
	std::cout << "Aȸ�� ��ǰ �հ� : " << ACOM::sum << std::endl;

	for (int i = 0; i < 5; i++)
	{
		std::cout << i + 1 << " Bȸ�� ��ǰ ���� �Է� :" << std::endl;
		std::cin >> number;
		BCOM::sum += number;
	}
	std::cout << "Bȸ�� ��ǰ �հ� : " << BCOM::sum << std::endl;
}

// ToyProject �� c++ �߰��� ������ ���ӿ� �����ϴ� �ð�.