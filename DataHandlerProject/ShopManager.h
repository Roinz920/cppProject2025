#pragma once

#include "Player.h"
#include "Shop.h"

class ShopManager	// player와 shop의 관계
{
	Player* player; 
	Shop* shop;

public:
	ShopManager()
	{
		player = new Player();
		shop = new Shop();
	}
};

