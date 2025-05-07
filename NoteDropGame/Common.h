#pragma once

#include <iostream>
#include <Windows.h>
#include <string_view>
#include <list>
#include <chrono>
#include <functional>
#include <array>

inline void GOTOXY(int x, int y)
{ SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), COORD{ (short)x, (short)y }); }