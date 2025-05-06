#pragma once

#include <Windows.h> // SetCursor

class Console
{
public:
	static void GoToXY(int x, int y)	//2번째 GoToXY에 적용이 안되는 문제가 있음.
	{
		COORD pos = { static_cast<short>(x), static_cast<short>(y) };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	}

	static void CursorVisible(bool show)
	{
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		CONSOLE_CURSOR_INFO cursorinfo;
		GetConsoleCursorInfo(hConsole, &cursorinfo);
		cursorinfo.bVisible = show; // 인자로 받은 show 값이 true이면, 커서가 보임 | false이면 숨겨줌
		SetConsoleCursorInfo(hConsole, &cursorinfo);
		
	}
};

