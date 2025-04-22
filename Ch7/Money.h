#pragma once

/*
*	Player 클래스 안에서 사용되는 Money.라는전재
*	플레이어 돈을 xx한다.
*/


class Gold
{

public:
	void Add();
	void Use();	
};

class Gem
{

public:
	void Add();
	void Use();
};

// 아이템을 구매한다
// player.Use();

class Money
{
private:
	Gold	gold;
	Gem		gem;
public:
	void Add();
	void Use();
};

