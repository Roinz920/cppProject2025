#pragma once

#include "Common.h"
#include <random>
#include <Windows.h>
#include <conio.h>
#include <tchar.h>	//텍스트 변환을 위한 기능이 추가되어있는 라이브러리


class randomUtil
{
public:
	static int GetrandomInt(int range);
};

class ConsoleUtil
{
public:
	static void gotoXY(int x, int y);
	static void PlayTitleSound(LPCWSTR filename);
	static void PlayBGM(LPCWSTR filename);
};