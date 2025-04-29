#include "Utillity.h"

//  int rand = Getr
int randomUtil::GetrandomInt(int range) // 1~ range 사이의 값을 반환하는 유틸리티
{
    static std::random_device device;
    static std::mt19937 gen(device());
    std::uniform_int_distribution<> dist(1, range);
    
    return dist(gen);
}

// ConsoleUtil::gotoXY(3,5);;
void ConsoleUtil::gotoXY(int x, int y)  // x,y 좌표로 커서를 이동시켜주는 유틸리티
{
    static COORD pos = { x,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void ConsoleUtil::PlayTitleSound(LPCWSTR filename)
{
    bool isPlay = PlaySound(filename, NULL, SND_SYNC);	// 동기 방식
}

void ConsoleUtil::PlayBGM(LPCWSTR filename)
{
    bool isPlay = PlaySound(filename, NULL, SND_ASYNC);	// 비동기 방식
}
