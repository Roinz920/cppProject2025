/*
*	상속.
*	1. 공통된 내용을 하나로 묶는 방법 (상속을 통해 코드를 물려줌)
*	2. 언제 상속을 해야하는가?
*/

/*
*	Unit의 행동 시스템 구현.
*	
*	유닛이 공격한다.
*	Unit.Attack();
*	 모두가 똑같은 Unit의 코드를 실행하는 문제 발생
*	→ virtual 키워드를 사용하면 객체가 가지고 있는 실제 코드가 실행된다. (단, 연결을 위해 동일한 함수 이름 지정이 필요함 - 오버라이딩)
*/

/*
*	Unit 코드를 이용해서
*	Attack, Stop, Hold, .. 생성
*	상속을 시켜 특별한 공격을 하도록 진행
*	같은 타입의 코드이지만 다른 기능의 실행이 가능하다.
*/

/*
*	핵심 콘텐츠는 수정하기 쉬워야 한다.
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

	cout << endl << "유닛 공격 텍스트 출력" << endl << endl;

	probe1.Attack();
	zealot1.Attack();
	dragoon1.Attack();

	cout << endl << "Unit으로 표현하기" << endl << endl;
	Unit& selectedUnit = probe1;
	Unit& selectedUnit2 = zealot1;
	Unit& selectedUnit3 = dragoon1;

	selectedUnit.Attack();
	selectedUnit2.Attack();
	selectedUnit3.Attack();

	

}