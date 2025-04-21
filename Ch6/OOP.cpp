#include "OOP.h"

void Example1()
{
	//	콘솔창에서 실행하기 때문에, 좌표가 음수가 되면 안된다.
	//	사람이라면 실수를 할 수 있다 (휴먼 에러). 하지만 실수를 찾기 위한 구조적 설계가 되어있지 않음.

	Point p1 = { -2,8 };
	Point p2 = { 4,10 };

	Point point(4, 6);
	cPoint cp1(3, 5);


	cp1.SetX(-3);


	Rectangle rect = { p1, p2 };
}

void Example2()
{
}

void Example3()
{
}

int cPoint::GetX() const
{
	return x;
}

int cPoint::GetY() const
{
	return y;
}

void cPoint::SetX(int amount)
{
	if (amount < 0)
	{
		cout << "잘못된 값으로 x를 변경했습니다." << endl;
		return;
	}
	x = amount;
}

void cPoint::SetY(int amount)
{
	if (amount < 0)
	{
		cout << "잘못된 값으로 y를 변경했습니다." << endl;
		return;
	}
	y = amount;
}
