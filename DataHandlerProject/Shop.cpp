#include "Shop.h"

bool Shop::LoadItems(const std::string& filename)
{
	count = loader.LoadItems("data.txt", items);
	return count > 0; // 아이템을 1개라도 가져오면 LoadItem이 "true", 아니라면 "false"
}

void Shop::ShowItems()
{
	// items의 정보를 보여줘
	std::cout << "판매하는 아이템" << std::endl;

	for (int i = 0; i < count; i++)
	{
		std::cout << items[i].index << "\t" << items[i].name << "\t" << items[i].price << "coin" 
			<< "\t타입 : " << items[i].dataType.type 
			<< "\t수치 : " << items[i].dataType.amount 
			<<std::endl;
	}
}
