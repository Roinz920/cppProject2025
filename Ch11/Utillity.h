#pragma once

#include "Common.h"
#include <random>
#include <Windows.h>
#include <tchar.h>	//�ؽ�Ʈ ��ȯ�� ���� ����� �߰��Ǿ��ִ� ���̺귯��


class randomUtil
{
public:
	static int GetrandomInt(int range);
};

class ConsoleUtil
{
	static void gotoXY(int x, int y);
public:
	static void PlayTitleSound(LPCWSTR filename);
	static void PlayBGM(LPCWSTR filename);
};