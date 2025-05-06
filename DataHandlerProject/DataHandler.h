#pragma once

#include <iostream>	//	input output stream
#include <fstream>	//	file stream
#include <sstream>	//	string stream

// 스트림 : 연속적인 흐름
// 코드 - 파일
// 스트림 라이브러리가 존재하고, 입력과 출력을 효율적을 관리하기 위함.

// 가져올 데이터와 타입을 하나의 이름으로 가져오기 위해서 구현

const int MAX_ITMES = 100;

enum UpgradeType
{
	STR, DEX, INTEL, LUK, NONE
};

struct ItemDataType
{
	UpgradeType type;
	int			amount;

	ItemDataType()
	{
		type = UpgradeType::NONE;
		amount = 0;
	}

	ItemDataType(int typeCount, int amount) : amount(amount)
	{
		if (typeCount == 0)
		{
			type = UpgradeType::STR;
		}
		else if (typeCount == 1)
		{
			type = UpgradeType::DEX;
		}
		else if (typeCount == 2)
		{
			type = UpgradeType::INTEL;
		}
		else if (typeCount == 3)
		{
			type = UpgradeType::LUK;
		}
		else
		{
			type = UpgradeType::NONE;
		}


	}
};

class Item
{
public:
	int index;
	std::string name;
	int price;
	ItemDataType dataType;

public:
	Item() : index(0), name(""), price(0), dataType(ItemDataType()) {}
	Item(int idx, std::string nm, int prc, ItemDataType dataType) :index(idx), name(nm), price(prc), dataType(dataType) {}
};
class DataHandler
{
public:
	// filename 메모장 열기, items(메모장의 정보를 저장할 매개체)
	int LoadItems(const std::string& filename, Item items[]);
};

