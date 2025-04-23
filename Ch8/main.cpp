/*
*	���.
*	1. ����� ������ �ϳ��� ���� ��� (����� ���� �ڵ带 ������)
*	2. ���� ����� �ؾ��ϴ°�?
*/

/*
*	Unit�� �ൿ �ý��� ����.
*	
*	������ �����Ѵ�.
*	Unit.Attack();
*	 ��ΰ� �Ȱ��� Unit�� �ڵ带 �����ϴ� ���� �߻�
*	�� virtual Ű���带 ����ϸ� ��ü�� ������ �ִ� ���� �ڵ尡 ����ȴ�. (��, ������ ���� ������ �Լ� �̸� ������ �ʿ��� - �������̵�)
*/

/*
*	Unit �ڵ带 �̿��ؼ�
*	Attack, Stop, Hold, .. ����
*	����� ���� Ư���� ������ �ϵ��� ����
*	���� Ÿ���� �ڵ������� �ٸ� ����� ������ �����ϴ�.
*/

/*
*	�ٽ� �������� �����ϱ� ������ �Ѵ�.
*/

#include "Common.h"
#include "Book.h"
#include "Monster.h"

int main()
{

	Book book;
	SpellBook spBook;
	StoryBook stBook;
	QuestBook qBook;

	book.Read();
	// book.ShowPage();
	spBook.Read();
	// spBook.ShowPage();
	stBook.Read();
	// stBook.ShowPage();
	qBook.Read();
	// qBook.ShowPage();

	Probe probe1(true);
	probe1.returnAttacker()->Attack();

	Attacker tempAttacker;
	tempAttacker = *(probe1.returnAttacker());
	tempAttacker.Attack();

	Zealot zealot1;
	Dragoon dragoon1;

	cout << endl << "���� ���� �ؽ�Ʈ ���" << endl << endl;

	probe1.Attack();
	zealot1.Attack();
	dragoon1.Attack();

	cout << endl << "Unit���� ǥ���ϱ�" << endl << endl;
	Unit& selectedUnit = probe1;
	Unit& selectedUnit2 = zealot1;
	Unit& selectedUnit3 = dragoon1;

	selectedUnit.Attack();
	selectedUnit2.Attack();
	selectedUnit3.Attack();

	

}