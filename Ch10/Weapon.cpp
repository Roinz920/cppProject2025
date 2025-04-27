#include "Weapon.h"

int Weapon::DoUpgrade()
{
    return lv * (baseATK + weight);
}

void Weapon::ShowInfo()
{
    cout << name << " ���� ���ݷ� : " << DoUpgrade() << endl;
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
    cout << " â���� ��ϴ�." << endl;
}

void Spear::Upgrade()
{
    // â���� ������ ���ݷ� ��ŭ �߰��� ���ݷ��� �����ϴ�.
    FinalATK = DoUpgrade() + specialAtk;

    cout << FinalATK << " â ���׷��̵� ������� ���ݷ��� ����߽��ϴ�." << endl;
}

void Sword::Attack()
{
    Weapon::Attack();
    cout << " ������ �ֵθ��ϴ�." << endl;
}

void Sword::Upgrade()
{
    // 10�� ���ݷ��� �߰��� ����մϴ�.
    FinalATK = DoUpgrade() + 10;
    cout << FinalATK << "Į ���׷��̵� ������� ���ݷ��� ����߽��ϴ�." << endl;
}

void Arrow::Attack()
{
    Weapon::Attack();
    cout << " Ȱ���� �ֵθ��ϴ�." << endl;
}

void Arrow::Upgrade()
{
    FinalATK = DoUpgrade() + 10;
    cout << FinalATK << "Ȱ ���׷��̵� ������� ���ݷ��� ����߽��ϴ�." << endl;
}