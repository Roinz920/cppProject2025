#pragma once

//	��ü�������α׷��� OOP (Objecdt Oriented Programming)

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
#include <stdexcept>


//	����1. ��ǥ�� ǥ���ϴ� ����ü Pos, ���� ����
//	��ǥ. �ܼ� ȭ�� â�� �簢���� �׸��� ��ü�� ��������.

//	��ǥ : �簢�� , ��, �ܼ�
//	Ű���� : ���� ���� ������, 


struct Point
{
private: //���̺�(lable) ���� ���
	int x;
	int y;
public:
	Point() {}
	Point(int x, int y) : x(x), y(y) {}
};


//	���� ���� ������
//	private, public, protected

//	private	: ��ü ���ο����� ���Ǵ� ���ٹ��
//	public	: ��ü �ܺο����� ���Ǵ� ���ٹ��

//	class��� Ű����� �⺻������ Private�� �����ȴ�.
//	sturct Ű����� �⺻ ���谡 public���� �Ǿ��ִ�.

//	���� ���� : �ܺο��� ������� ���ϵ��� ���� ��
//	why? �� �����ϰ� ������ �ڵ忡���� �ܺη� ����ǵ��� ����� ����.


class cPoint
{
private:
	int x;
	int y;
public:
	// ������ : �ڵ����� ������ִ� ���
	// ���� �����ڸ� �����ϸ� ����Ʈ �����ڰ� �ڵ����� ��������� �ʴ´�.

	cPoint() {}
	
	cPoint(int outx, int outy)
	{
		if (outx < 0 || outy < 0)
		{
			cout << "��ȿ���� ���� ������ �����Ǿ����ϴ�." << endl;
			// ����ó��
			// ���� �ش� ���ܻ����� ����ȴٸ�, �ڵ尡 ���߰� ���� ������ ����Ѵ�.
			throw std::invalid_argument("��ȿ���� ���� ������ �����Ǿ����ϴ�.");
			// invalid_argument() : ���ܰ� ó������ ���� �����ڵ带 ǥ�����ִ� ���
		}
		
		x = outx;
		y = outy;
	}
	
	int GetX() const;
	int GetY() const;

	void SetX(int amount);
	void SetY(int amount);

};

class Rectangle
{
private:
	cPoint leftUpPoint;		// x�� �۰�, y�� ū �༮
	cPoint rightDownPoint;	// x�� ũ��, y�� ���� �༮
public:
	
	Rectangle() {}

	Rectangle(cPoint p1, cPoint p2)	// p1, p2 ��ǥ�� lu, rd ������ �ƴ� ��쿡�� ������ ���� �� �ִ�.
	{
		if (p1.GetX() < p2.GetX() && p1.GetY() > p2.GetY())
		{
			leftUpPoint = p1;
			rightDownPoint = p2;
		}
		else
		{
			leftUpPoint = p2;
			rightDownPoint = p1;
		}
		
		//	p1�� x��ǥ�� p2�� x��ǥ ���
		//	p1�� y��ǥ�� p2�� y��ǥ ���
		//	
		
		//leftUpPoint = { 0,0 };
		//rightDownPoint = { 0,0 };
	}

	Rectangle(int x1, int x2, int y1, int y2)
	{
		cPoint newLeftUp;
		cPoint newRightDown;

		if (x1 < x2)
		{
			newLeftUp.SetX(x1);
			newRightDown.SetX(x2);
		}
		else if (x1 > x2)
		{
			newLeftUp.SetX(x2);
			newRightDown.SetX(x1);
		}
		else
		{
			cout << "x,y�� ��ǥ�� ���� �� �����ϴ�." << endl;
		}
		if (y1 < y2)
		{
			newLeftUp.SetX(y2);
			newRightDown.SetX(y1);
		}
		else if (y1 > y2)
		{
			newLeftUp.SetX(y1);
			newRightDown.SetX(y2);
		}
		else
		{
			cout << "x,y�� ��ǥ�� ���� �� �����ϴ�." << endl;
		}

	}

	void Draw();
};

void Example1();
void Example2();
void Example3();