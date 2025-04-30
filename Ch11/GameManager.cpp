#include "GameManager.h"

void GameManager::ShowTitle()
{
	ConsoleUtil::gotoXY(5, 5);
	cout << "���� ����" << endl;
	//ConsoleUtil::PlayTitleSound(_T("sound.wav"));
}

void GameManager::ShopPhase()
{
	system("cls");
	cout << "������ �������" << endl;

	int input = 0;
	cout << "������ �Ͻðھ��?" << endl;
	cout << "1. �ּҼӵ� 1��ŭ ����" << endl;
	cout << "2. �ִ�ӵ� 1��ŭ ����" << endl;
	cout << "3. ���� ����" << endl;
	cin >> input;

	if (input == 1)
	{
		player->Upgrade(PlayerStat::MINSPEED, 1);
	}
	else if (input == 2)
	{
		player->Upgrade(PlayerStat::MAXSPEED, 1);
	}
	else if (input == 3)
	{
		cout << "�� �� ��ⷯ �������" << endl;
	}
}

void GameManager::GamePhase()
{
	//Runner* runA = new Player();
	Runner* runB = new Runner("B");
	Runner* runC = new Runner("C");
	Runner* runD = new Runner("D");

	string line = "=====================================================================";
	int endline = line.length();
	//ConsoleUtil::PlayBGM(_T("sound.wav"));

	player->RunnerInitialize();
	runB->RunnerInitialize();
	runC->RunnerInitialize();
	runD->RunnerInitialize();

	while (true)
	{
		Sleep(250);	//	Sleep(1000); �� 1000ms (1��)���� ������ ������Ʈ
		system("cls");	// ȭ�� �����

		cout << line << endl;
		player->Run();
		runB->Run();
		runC->Run();
		runD->Run();
		cout << line << endl;
		cout << endl;
		player->ShowPlayerGameInfo();

		

		if (player->CheckEndLine(endline)
			|| runB->CheckEndLine(endline)
			|| runC->CheckEndLine(endline)
			|| runD->CheckEndLine(endline))
		{
			cout << "��� ����" << endl;
			break;
		}
	}

	if (player->CheckEndLine(endline))
	{
		cout << "A�� 1���� �߽��ϴ�." << endl;
	}
	if (runB->CheckEndLine(endline))
	{
		cout << "B�� 1���� �߽��ϴ�." << endl;
	}
	if (runC->CheckEndLine(endline))
	{
		cout << "C�� 1���� �߽��ϴ�." << endl;
	}
	if (runD->CheckEndLine(endline))
	{
		cout << "D�� 1���� �߽��ϴ�." << endl;
	}


	_getch();

}

void GameManager::Play()
{
	ShowTitle();

	while (true)
	{
		ShopPhase();
		GamePhase();

		//if (exitCondition))
		//{
		//	break;
		//}
	}
}
