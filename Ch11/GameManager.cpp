#include "GameManager.h"

void GameManager::ShowTitle()
{
	ConsoleUtil::gotoXY(5, 5);
	cout << "제목 실행" << endl;
	//ConsoleUtil::PlayTitleSound(_T("sound.wav"));
}

void GameManager::ShopPhase()
{
	system("cls");
	cout << "상점에 어서오세요" << endl;

	int input = 0;
	cout << "무엇을 하시겠어요?" << endl;
	cout << "1. 최소속도 1만큼 증가" << endl;
	cout << "2. 최대속도 1만큼 증가" << endl;
	cout << "3. 게임 시작" << endl;
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
		cout << "한 판 즐기러 가볼까요" << endl;
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
		Sleep(250);	//	Sleep(1000); → 1000ms (1초)마다 게임을 업데이트
		system("cls");	// 화면 지우기

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
			cout << "경기 종료" << endl;
			break;
		}
	}

	if (player->CheckEndLine(endline))
	{
		cout << "A가 1등을 했습니다." << endl;
	}
	if (runB->CheckEndLine(endline))
	{
		cout << "B가 1등을 했습니다." << endl;
	}
	if (runC->CheckEndLine(endline))
	{
		cout << "C가 1등을 했습니다." << endl;
	}
	if (runD->CheckEndLine(endline))
	{
		cout << "D가 1등을 했습니다." << endl;
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
