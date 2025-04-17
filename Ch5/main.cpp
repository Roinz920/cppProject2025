/*
*	Date : 2025-04-16
	Name : ������
	Subject : ���� ����, ���� ����
*/

#include "Common.h"
#include "person.h"

void Example()
{
	//	������ �����ϴ� ������ Ÿ�� ���� 2�� ����.
	int numA = 10;
	//	numB, numA�� ����Ǿ��ִ� ���� B�� �ű�� �ʹ�.
	//	numA�� ���� numB�� �����ϰ� �ʹ�.
	int numB = numA;	// ���Կ����� : (=)�� �����ʿ� �ִ� ������ ���ʿ� �����϶�. | numA�� �ν� -> ���� 10 �ν� -> ���ʿ� ���� -> numB�� ���� 10 ����

	//	������ �ּҸ� �����ϴ� ���� 2�� ����
	int* numAptr = &numA;	// &numA�� �ν� -> numA�� 16���� �ּ� �ν� -> ���ʿ� ���� numAptr��� 16���� �ּҿ� numA�� 16���� �ּ� ����
	int* numBptr = numAptr;

	//	numBptr�� �� �ּҿ� numAptr�� ���� �ּ�, numA�� �ּҴ� ��� �����ϱ�?
	//	�� 

	cout << "numA�� �ּ� : " << &numA << endl;
	cout << "numAptr�� �� : " << numAptr << endl;
	cout << "numBptr�� �� : " << numBptr << endl;
	cout << "numAptr�� �ּ� : " << &numAptr << endl;
	cout << "numBptr�� �ּ� : " << &numBptr << endl;

	// �������� ���Կ����� ����� ���
	// numA, numB ���� �ٸ� ������ ����
	// �ּҳ��� ���Կ����� ����� ���
	// �ּҰ� ����Ű�� ���� ����.

	// numA, numAptr, numBptr �ּ��� ���� ��� �����ϴ�.
	// �ش� �ּҸ� �ϳ��� �������� �����ϸ�, �ٸ� ���������� ������ �� ���� �ȴ�. (memoryallocate�� ����Ͽ� ������Ű�� �� ���)
}

int main()
{
	cout << "Ch5 : ������ ����" << endl;
	//Example();

	//Person human1 = { 20 }; // human1�̶�� ������ �����͸� �����ؼ� �־�����Ѵ�. (�ʱ�ȭ)
	Person human1 = { 20, "���谡"}; // 2��°�� ���� ����(name)���� const char�� �����ȴ�.
	Person human1Clone;		//
	human1Clone.Clone(human1);
	human1.Show();
	human1Clone.Show();
}