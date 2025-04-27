/*
*  목표 : 클래스 간의 관계를 정의 이 후 어떻게 코딩을 할까?
*  상속을 이용한 객체로 시스템 구현
*/

/*
*  강화 시스템 - 상속과 함께 구현한다.
*  // lv * (baseATK + weight) = 최종공격력;
*/

#include "Common.h"
#include "Weapon.h"
#include "UpgradeSystem.h"

int main()
{
    Weapon weapon("롱소드", 1, 3, 5);
    weapon.ShowInfo();
    weapon.Attack();
    Weapon weapon2("숏소드", 1, 4, 7);
    weapon2.ShowInfo();
    weapon2.Attack();

    Spear 창("창", 1, 3, 5, 2);
    Sword 칼("칼", 1, 4, 7);
    Arrow 활("활", 1, 2, 3);
    창.Attack();
    칼.Attack();

    // 다형성
    // 같은 모습인데 다르게 표현할 수 있다.

    // 포인터
    // 특정 타입 공간을 가르킨다.
    // Weapon*  Spear 가리켜라 어떤 결과가 나올까?
    
    Weapon* wptr = &창;
    Weapon* wptr2 = &칼;
    wptr->Attack();
    wptr2->Attack();

    UpgradeSystem upgradeSystem;

    upgradeSystem.Upgrade(&창);
    upgradeSystem.Upgrade(&칼);
    upgradeSystem.Upgrade(&활);
}