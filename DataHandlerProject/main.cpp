/*
*	목표 : 메모장에 있는 게임 데이터를 코드로 읽어오는 방법의 구현
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
	//// items의 정보를 보여줘
	//std::cout << "판매하는 아이템" << std::endl;
	//
	//for (int i = 0; i < count; i++)
	//{
	//	std::cout << items[i].index << "\t" << items[i].name << "\t" << items[i].price << "coin" << std::endl;
	//}

	// items의 데이터를 읽어와줘
}