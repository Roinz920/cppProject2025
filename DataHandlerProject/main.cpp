/*
*	��ǥ : �޸��忡 �ִ� ���� �����͸� �ڵ�� �о���� ����� ����
*/

#include "ShopManager.h"

int main()
{
	Shop shop;
	
	shop.ShowItems();

	Player player;

	player.Upgrade(shop.GetItems(0));
	player.ShowPlayerInfo();


	//DataHandler loader;
	//
	//Item items[MAX_ITMES];
	//
	//int count =	loader.LoadItems("data.txt", items);
	//
	//// items�� ������ ������
	//std::cout << "�Ǹ��ϴ� ������" << std::endl;
	//
	//for (int i = 0; i < count; i++)
	//{
	//	std::cout << items[i].index << "\t" << items[i].name << "\t" << items[i].price << "coin" << std::endl;
	//}

	// items�� �����͸� �о����
}