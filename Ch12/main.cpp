#include "SoundUtil.h"

int main()
{
	cout << "��������� �����ϴ� ���" << endl;

	//	visual studio audio file ����ϴ� ���
	//	Windows.h�� PlaySound �Լ� ����ϱ�
	
	/*			 */
	/*	BOOL PlaySoundW(LPCWSTR pszSound, HMODULE hmod, DWORD fdwSound) */
	//	�Ҹ��� ��µǸ� true, �ƴϸ� false	

	// SND_SYNC		: ���� ������ ���� ����ǰ� �� �Ŀ� �Ʒ��� �ڵ带 ����
	// SND_ASYNC	: ���� ������ ����Ǵ� �Ͱ� �ڵ尡 ����Ǵ� ���� ������ ���� �� �ش������δ� main �Լ��� ����ǰ� ���� ���� ������ ����� �ߴ� ��
	SoundUtil::PlayBGM(_T("04.nora (off vocal).wav"));

	while (true)
	{

	}
}