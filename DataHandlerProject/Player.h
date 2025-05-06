#pragma once

#include "DataHandler.h"

class Player
{
	int str;
	int dex;
	int intel;
	int luk;

public:
	Player() : str(0), dex(0), intel(0), luk(0) {}

	void Upgrade(UpgradeType type, int amount);
	void Upgrade(Item& item);

	void ShowPlayerInfo()
	{
		std::cout << "STR : " << str << std::endl;
		std::cout << "DEX : " << dex << std::endl;
		std::cout << "INT : " << intel<< std::endl;
		std::cout << "LUK : " << luk << std::endl;
	}
};

