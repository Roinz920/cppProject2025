#pragma once

#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

// [teller] 대사
class Actor
{
public:
	void Tell(const string& teller, const string& story)
	{
		cout << endl;
		cout << "[" << teller << "] " << story << endl;
	}

	bool Selection(const string& teller, const string& story1, const string& story2)
	{
		int input = 0;
		cout << "1 : " << story1 << endl << "2 : " << story2 << endl;
		cin >> input;
		if (input == 1)
		{
			Tell(teller, story1);
			return true;
		}
		else if (input == 2)
		{
			Tell(teller, story2);
			return false;
		}
		else
		{
			
			cout << "다시 이야기해볼까?" << endl;
			return Selection(teller, story1, story2);
		}
	}
};

