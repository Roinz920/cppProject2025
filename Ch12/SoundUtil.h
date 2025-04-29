#pragma once
#include <iostream>
#include <Windows.h>
#include <tchar.h>	//텍스트 변환을 위한 기능이 추가되어있는 라이브러리

//Winmm.lib : Window Multi Media Library

using namespace std;

class SoundUtil
{
public:
	static void PlayTitleSound(LPCWSTR filename);
	static void PlayBGM(LPCWSTR filename);
};

