#pragma once
#include <iostream>
#include <Windows.h>
#include <tchar.h>	//�ؽ�Ʈ ��ȯ�� ���� ����� �߰��Ǿ��ִ� ���̺귯��

//Winmm.lib : Window Multi Media Library

using namespace std;

class SoundUtil
{
public:
	static void PlayTitleSound(LPCWSTR filename);
	static void PlayBGM(LPCWSTR filename);
};

