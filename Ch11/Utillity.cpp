#include "Utillity.h"

//  int rand = Getr
int randomUtil::GetrandomInt(int range) // 1~ range ������ ���� ��ȯ�ϴ� ��ƿ��Ƽ
{
    static std::random_device device;
    static std::mt19937 gen(device());
    std::uniform_int_distribution<> dist(1, range);
    
    return dist(gen);
}

// ConsoleUtil::gotoXY(3,5);;
void ConsoleUtil::gotoXY(int x, int y)  // x,y ��ǥ�� Ŀ���� �̵������ִ� ��ƿ��Ƽ
{
    static COORD pos = { x,y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
