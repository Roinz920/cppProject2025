#include "SoundUtil.h"

void SoundUtil::PlayTitleSound(LPCWSTR filename)
{
	bool isPlay = PlaySound(filename, NULL, SND_SYNC);	//	���� ���
}

void SoundUtil::PlayBGM(LPCWSTR filename)
{
	bool isPlay = PlaySound(filename, NULL, SND_ASYNC);	// �񵿱� ���
}
