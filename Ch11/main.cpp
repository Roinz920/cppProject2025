// 클래스를 만드는 연습

#include "Base.h"
#include "Utillity.h"
#include "Runner.h"

void ClassDefaultInfo()
{
	Base* base = new Base();
	delete base;

	Base* derived = new Derived();

	derived->Do();

	delete derived;
}

int main()
{
	ClassDefaultInfo();
	system("cls");
	std::cout << "달리기 게임 코드" << std::endl;

	Runner* runA = new Runner("A");
	Runner* runB = new Runner("B");
	Runner* runC = new Runner("C");
	Runner* runD = new Runner("D");

		string line = "===============================================================================";
	int endline = line.length();
	

	while (true)
	{
		Sleep(250);	//	Sleep(1000); → 1000ms (1초)마다 게임을 업데이트
		system("cls");	// 화면 지우기

		runA->Run();
		runB->Run();
		runC->Run();
		runD->Run();
		cout << line << endl;
		
		if (runA->CheckEndLine(endline) 
			|| runB->CheckEndLine(endline) 
			|| runC->CheckEndLine(endline) 
			|| runD->CheckEndLine(endline))
		{
			cout << "경기 종료" << endl;
			break;
		}
	}

	if (runA->CheckEndLine(endline))
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

}