#include "Player.h"

void Player::Upgrade(UpgradeType type, int amount)
{
	if (type == STR)
	{
		str += amount;
	}
	else if (type == DEX)
	{
		dex += amount;
	}
	else if (type == INTEL)
	{
		intel += amount;
	}
	else if (type == LUK)
	{
		luk += amount;
	}
	else if (type == NONE)
	{
		return;
	}
}


void Player::Upgrade(Item& item)
{
	Upgrade(item.dataType.type, item.dataType.amount);
}
