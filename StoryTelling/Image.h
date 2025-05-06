#pragma once

#include <iostream>
#include <string>
#include "Console.h"
#define MAX_WIDTH 100
#define MAX_HEIGHT 30

class Image
{
private:
	char art[MAX_HEIGHT][MAX_WIDTH];
	int height;

public:
	Image(const char* model, int height)
	{
		this->height = height;

		const char* lineStart = model;
		for (int i = 0; i < height; i++)
		{
			const char* lineEnd = strchr(lineStart, '\n'); // i���� �ٿ��� ���๮�ڸ� ã�ƶ�.
			if (lineEnd == nullptr)
			{
				lineEnd = model + strlen(model); // ������ ���� ǥ��
			}
			int length = lineEnd - lineStart;
			strncpy_s(this->art[i], lineStart, length);
			lineStart = lineEnd + 1;
		}
	}

	void show(int x, int y) const
	{
		for (int i = 0; i < height; i++)
		{
			Console::GoToXY(x, y + i);
			std::cout << art[i];
		}
	}
	
	void moveForward(int x, int y, int moveDistance, int moveDelaymsTime)
	{
		for (int i = 0; i < moveDistance; i++)
		{
			system("cls");
			for (int j = 0; j < height; j++)
			{
				Console::GoToXY(x + i, y + j);
				std::cout << art[j];
			}
			Sleep(moveDelaymsTime);
			
		}
	}
	
	void moveReverse(int x, int y, int moveDistance, int moveDelaymsTime)
	{
		for (int i = 0; i < moveDistance; i++)
		{
			system("cls");
			int currentX = x - i;
			if (currentX < 0) // �ֿܼ��� x�� 0���� ������, ���� �߻�
			{
				currentX = 0;
			}
			for (int j = 0; j < height; j++)
			{
				Console::GoToXY(currentX, y + j);
				std::cout << art[j];
			}
			Sleep(moveDelaymsTime);
			
		}
	}
};

