/*
*	Date : 2025-04-15
	Name : 김정민
	Subject : 객체 지향 프로그래밍
*/

/*
*	1. namespace 사용법 및 주의사항
*	2. cpp 구조체의 변경 사항 (객체를 표현하는 문법이 추가되었다.)
*	3. class 키워드
*/



//	std::cout, std::cin, std::endl
//	표준 라이브러리의 standard (std)

//using namespace std;	// 해당 소스파일 내부의 모든 코드를 namespace std 안에 있는 것으로 판단하라		※다소 위험한 코드※

//	주의해야할 사항.
//	std 안에 있던 이름과 같은 타입의 데이터를 생성한다면, 모호하다는 에러가 발생함.

//	권장하는 사용방법

#include "Item.h"
#include "Player.h"

void NameSpaceExample()
{
	int number = 0;
	cin >> number;
	cout << "number의 값 : " << number << endl;
}


//	데이터를 선언
//	함수를 선언

// 구조체 내부에 함수를 실행하게끔 한다.

int main()
{
	//std::cout << "Ch4 : 객체 지향 프로그래밍" << std::endl;
	cout << "Ch4 : 객체 지향 프로그래밍" << endl;

	// NameSpaceExample();

	Item item1 = { "Sword", 100, 1, WEAPON };
	item1.ShowIteminfo();

	Item item2("Potion", 20, 5, USEABLE);	// Item struct 내부의 Item() 이라는 생성자 함수로 item2를 정의 및 초기화 시킨 방식 ※생성자도 오버로딩이 가능하므로 참조하자
	item2.ShowIteminfo();


	Player player1 = { 0,0,"Hero" };
	player1.ShowInfo();

	
}