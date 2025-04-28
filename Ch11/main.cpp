// Ŭ������ ����� ����

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
	std::cout << "�޸��� ���� �ڵ�" << std::endl;

	Runner* runA = new Runner("A");
	Runner* runB = new Runner("B");
	Runner* runC = new Runner("C");
	Runner* runD = new Runner("D");

		string line = "===============================================================================";
	int endline = line.length();
	

	while (true)
	{
		Sleep(250);	//	Sleep(1000); �� 1000ms (1��)���� ������ ������Ʈ
		system("cls");	// ȭ�� �����

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
			cout << "��� ����" << endl;
			break;
		}
	}

	if (runA->CheckEndLine(endline))
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

}