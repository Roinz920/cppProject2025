#include "Weapon.h"

int Weapon::DoUpgrade()
{
    return lv * (baseATK + weight);
}

void Weapon::ShowInfo()
{
    cout << name << " 최종 공격력 : " << DoUpgrade() << endl;
}

void Weapon::Attack()
{
    cout << DoUpgrade();
}

void Weapon::Upgrade()
{
    DoUpgrade();
}

void Spear::Attack()
{
    Weapon::Attack();
    cout << " 창으로 찌릅니다." << endl;
}

void Spear::Upgrade()
{
    // 창마다 고유의 공격력 만큼 추가로 공격력이 오릅니다.
    FinalATK = DoUpgrade() + specialAtk;

    cout << FinalATK << " 창 업그레이드 방식으로 공격력이 상승했습니다." << endl;
}

void Sword::Attack()
{
    Weapon::Attack();
    cout << " 검으로 휘두릅니다." << endl;
}

void Sword::Upgrade()
{
    // 10의 공격력이 추가로 상승합니다.
    FinalATK = DoUpgrade() + 10;
    cout << FinalATK << "칼 업그레이드 방식으로 공격력이 상승했습니다." << endl;
}

void Arrow::Attack()
{
    Weapon::Attack();
    cout << " 활으로 휘두릅니다." << endl;
}

void Arrow::Upgrade()
{
    FinalATK = DoUpgrade() + 10;
    cout << FinalATK << "활 업그레이드 방식으로 공격력이 상승했습니다." << endl;
}