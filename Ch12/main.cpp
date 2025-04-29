#include "SoundUtil.h"

int main()
{
	cout << "배경음악을 삽입하는 방법" << endl;

	//	visual studio audio file 출력하는 방법
	//	Windows.h의 PlaySound 함수 사용하기
	
	/*			 */
	/*	BOOL PlaySoundW(LPCWSTR pszSound, HMODULE hmod, DWORD fdwSound) */
	//	소리가 출력되면 true, 아니면 false	

	// SND_SYNC		: 사운드 파일이 전부 실행되고 난 후에 아래의 코드를 실행
	// SND_ASYNC	: 사운드 파일이 실행되는 것과 코드가 진행되는 것이 별개로 진행 됨 ※단점으로는 main 함수가 진행되고 있지 않을 때에는 재생이 중단 됨
	SoundUtil::PlayBGM(_T("04.nora (off vocal).wav"));

	while (true)
	{

	}
}