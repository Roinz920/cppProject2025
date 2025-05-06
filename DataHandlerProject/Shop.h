#pragma once

#include "DataHandler.h"

class Shop
{
	DataHandler loader;
	Item items[MAX_ITMES];
	int count;
public:
	Shop() : count(0)
	{
		LoadItems("data.txt");
	}
	//Shop(const std::string& filename) : count(0)
	//{
	//	LoadItems(filename);
	//}

	bool LoadItems(const std::string& filename);
	void ShowItems();
	Item& GetItems(int index)
	{
		return items[index];
	}
};

