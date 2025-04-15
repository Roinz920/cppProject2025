/*
*	Date : 2025-04-15
	Name : ������
	Subject : ��ü ���� ���α׷���
*/

/*
*	1. namespace ���� �� ���ǻ���
*	2. cpp ����ü�� ���� ���� (��ü�� ǥ���ϴ� ������ �߰��Ǿ���.)
*	3. class Ű����
*/



//	std::cout, std::cin, std::endl
//	ǥ�� ���̺귯���� standard (std)

//using namespace std;	// �ش� �ҽ����� ������ ��� �ڵ带 namespace std �ȿ� �ִ� ������ �Ǵ��϶�		�شټ� ������ �ڵ��

//	�����ؾ��� ����.
//	std �ȿ� �ִ� �̸��� ���� Ÿ���� �����͸� �����Ѵٸ�, ��ȣ�ϴٴ� ������ �߻���.

//	�����ϴ� �����

#include "Item.h"
#include "Player.h"

void NameSpaceExample()
{
	int number = 0;
	cin >> number;
	cout << "number�� �� : " << number << endl;
}


//	�����͸� ����
//	�Լ��� ����

// ����ü ���ο� �Լ��� �����ϰԲ� �Ѵ�.

int main()
{
	//std::cout << "Ch4 : ��ü ���� ���α׷���" << std::endl;
	cout << "Ch4 : ��ü ���� ���α׷���" << endl;

	// NameSpaceExample();

	Item item1 = { "Sword", 100, 1, WEAPON };
	item1.ShowIteminfo();

	Item item2("Potion", 20, 5, USEABLE);	// Item struct ������ Item() �̶�� ������ �Լ��� item2�� ���� �� �ʱ�ȭ ��Ų ��� �ػ����ڵ� �����ε��� �����ϹǷ� ��������
	item2.ShowIteminfo();


	Player player1 = { 0,0,"Hero" };
	player1.ShowInfo();

	
}