#include "SoundUtil.h"

void SoundUtil::PlayTitleSound(LPCWSTR filename)
{
	bool isPlay = PlaySound(filename, NULL, SND_SYNC);	//	동기 방식
}

void SoundUtil::PlayBGM(LPCWSTR filename)
{
	bool isPlay = PlaySound(filename, NULL, SND_ASYNC);	// 비동기 방식
}
