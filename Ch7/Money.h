#pragma once

/*
*	Player Ŭ���� �ȿ��� ���Ǵ� Money.�������
*	�÷��̾� ���� xx�Ѵ�.
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

// �������� �����Ѵ�
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

