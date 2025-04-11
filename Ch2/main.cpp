/*
*	Date : 2025-04-11
	Name : ������
	Subject : ������ // C, cpp�� ������, ������
*/

#include <iostream>

/*
*	������ ���ظ� ���� Swap �Լ��� ����
*/
void SwapByValue(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
	// SwapByValue main�� ȣ������ ���� num1, num2�� ������ ������ ������ ����Ǵ°�? �� X
}

void SwapByRef(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

//	�Լ� �����ε�, �Լ��� ��Ī�� �����ص� �Ű������� Ÿ���� �ٸ� ������ �ٸ� �Լ��� �Ǻ���
void SwapByRef(int& num1, int& num2)	// &num1 - ������ �ּҸ� ��ȯ�϶�
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

//	����1. SwapPointer �Լ��� �����. �ּҸ� �����ڷ� �����ϴ� �Լ��� �����.
// int type

//	������ �����ڷ� ����� �ִ°�? �� No. �ּ�, �迭 ���� �����ڷ� ���� �� ����
//	int arr[3] = {1,2,3};
//	int& arrRef1 = arr[0];	// arrRef1�� arr[0]�� �����̴�.

//	int num1 = 10;
//	int* num1ptr = &num1;
//	int*  &num1ptr = num1ptr; num1ref�� num1ptr�� �����̴�.

//	int�� ������ (int*) ���� 2���� �ٲ۴�
void SwapPointer(int*& num1ptr, int*& num2ptr)
{
	int* temp = num1ptr;
	num1ptr = num2ptr;
	num2ptr = temp;
}

int main()
{
	//	namespace std�� ���ܴ̿��ִ� ���� �ȿ� cout �����ͼ� ���
	std::cout << "2��_������" << std::endl;

	// ������ (����) ���� ����� ����� ���еȴ�.
	// �Լ��� ����� ����� ���еȴ�.

	int num1; // ����
	num1 = 1; // �ʱ�ȭ

	int* num1ptr = &num1;	// num1ptr ������ ������ num1�� �ּҸ� �����Ѵ�. ���������� ����� �ʱ�ȭ �ʿ�

	int& num1ref = num1;	// num1 ������ �����ϴ� num1ref. num1ref�� num1�� �������̴�. ( num1�� ������ �߰����ְڴ�. �� ������ num1ref�̴�. )

	// int num2 = num1;		// �� ���������� num1�� ���� 1�̴�.
	// num1 = num1 + 1;		// �� ���������� num2�� ���� 2�̴�.

	num1ref += 1;

	std::cout << "num1�� �� : " << num1 << std::endl;		// ������ ����� cpp �������� �ۼ�
	std::cout << "num1�� ���� num1ref�� �����ڷ� ȣ�� : " << num1ref << std::endl;	// 2;

	//	A. ��(A�� ����)
	//	A�� ��� �Ծ�
	//	���� ��� �Ծ�

	// �������� ���ó?

	int input = 0;
	// scanf("%d", &input);
	// C++������ �����ڸ� ����ؼ� �Լ��� ����� ����, *, & ��ȣ�� ������� �ʰ� ǥ���� �� �ִ�.
	// std::cin >> input;

	std::cout << "Call by Value�� Call By Reffernce ����" << std::endl;

	int value1 = 10, value2 = 20;

	std::cout << "Call By Value ���" << std::endl;
	std::cout << "value1 : " << value1 << " value2 : " << value2 << std::endl;
	SwapByValue(value1, value2);
	std::cout << "value1 : " << value1 << " value2 : " << value2 << std::endl;

	std::cout << "Call By Ref ���" << std::endl;
	std::cout << "value1 : " << value1 << " value2 : " << value2 << std::endl;
	SwapByRef(&value1, &value2);
	std::cout << "value1 : " << value1 << " value2 : " << value2 << std::endl;

	std::cout << "Call By Ref ���" << std::endl;
	std::cout << "value1 : " << value1 << " value2 : " << value2 << std::endl;
	SwapByRef(value1, value2);
	std::cout << "value1 : " << value1 << " value2 : " << value2 << std::endl;

	std::cout << "�������� ���� ���" << std::endl;

	int ssnum1 = 5;
	int ssnum2 = 100;

	int* ssnum1ptr = &ssnum1;
	int* ssnum2ptr = &ssnum2;
	std::cout << "ssnum1ptr�κ��� �� ��� : " << *ssnum1ptr << std::endl;
	std::cout << "ssnum2ptr�κ��� �� ��� : " << *ssnum2ptr << std::endl;

	SwapPointer(ssnum1ptr, ssnum2ptr);

	std::cout << "ssnum1ptr�κ��� �� ��� : " << *ssnum1ptr << std::endl;
	std::cout << "ssnum2ptr�κ��� �� ��� : " << *ssnum2ptr << std::endl;

	//	�����ڸ� ����ϸ� �����Ϳ� ��� �� ��ȣ�� 1�� �ٿ��� ǥ���� �� �ִ�.
	//	int, int���� �ٲ� ������ �����ڸ� ����Ѵ�.
	//	int*, int*���� �ٲ� ������ int*&, int*&

	//	������ ��� �� ���ǻ���

	//	int�� ������ ���� ��, int& numref (�� �̸��� �ǹ��ְ� �ۼ��ϴ� ���� �߿�)
	//	int& AAA; [error_1] �ݵ�� ����� ���ÿ� �ʱ�ȭ�ؾ� ��
	int AAA = 10;
	int& AAAref = AAA; // [error_1]�� �ذ� ���

	//	const�� Ȱ���Ͽ� �Լ��� ����ϴ� ������� ���̵带 �ȳ����� ��
	// void Func(const int* num1); num1�� �����ϴ� ���� �������� ����
	// void Func(const int& num1); num1�� ���� ���� �������� ����

	//	return Ÿ���� �����ڸ� ������ ���� �����ؾ� ��

	//	main �Լ������� ����	|	�Լ��� �� ���� (int Func())				|	�Լ����� ������ ���� (int& Func())
	//	int a = func();			|	a�� ���� ���� ��						|	a�� ���� ���� ��. func �ȿ��� ���� ������ return���� �ʾƾ� ��
	//	int& a = func();		|	a�� func���� ���� �������� �Ѵ�.		|	func�ȿ� ���������� return���� �ʾƾ� ��
	//								����] a���� 10�� �������� �Ѵ�.
	//								a=9; 10�� 9�� �϶� �� ������ ���� �߻�
	//	const int& a = func();	|	a�� ������ 10�� �������� �Ѵ�			|	func �ȿ��� ���� ������ return���� �ʾƾ� ��.	
	//							| 10�� ������ a��� �Ѵ�.
	//							| const int& = 10;

}