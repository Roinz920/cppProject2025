/*
*	Date : 2025-04-14
	Name : 김정민
	Subject : 참조자 // C, cpp의 차이점, 참조자
*/

#include <iostream>

/*
*	x,y의 정수형 좌표를 함수의 매개변수로 받아서 함수 외부에서 값이 변경되도록 하는 함수 
	void PlayerInput(int& x, int& y);
	반환값이 없는 함수. 
	이름이 PlayerInput(int& a, int& b) 호출할 수 있다
	타입의 해석 : 정수형 데이터, 함수 외부에서 참조한 데이터를 수저앟 ㄹ수 있다.
*/

/*
*	함수의 선언
*						 ↓매개변수
*	반환타입 함수의이름(타입 이름, ...){}
*	참조자는 타입에 적용 가능
*	
*	1. 반환타입에 참조자가 사용되는 경우 | 아닌 경우
*	2. 매개변수에 참조자가 사용되는 경우 | 아닌 경우
*/

/*
*	함수 오버로딩(overloading) - 함수 과적
*	플레이어의 x,y 좌표를 입력받아서 좌표를 변경시키는 함수
*	플레이어의 좌표 구조체를 입력 받아서 좌표를 변경시키는 함수 // c에서는 함수의 이름으로 구분하기 때문에 함수 이름을 분리시켜야했음
*	c++에서는 같은 이름에 타입만 다르게 받으면 컴퓨터(의 컴파일러)가 구분할 수 있다.* 
*/

/*
*	함수 오버로딩.
*	c++ 함수를 호출하는 방법을 알려준다. 이름 (타입 이름, ...)
*	함수 오버로딩은 함수의 이름과 함수의 매개 변수의 타입의 갯수로 구분한다.
* 
*	※주의사항
*	- 반환형이 달라도 같은 함수로 판단한다.
*		void Func();
*		int Func(); // 오버로드 할 수 없음
*	- 매개 변수의 이름이 달라도 타입의 갯수가 같으면 오버로드 할 수 없다.
*		void PlayerInput (int x, int y);
*		void PlayerInput (int a, int b); // 오버로드할 수 없음
*/

/*
*	참조자를 반환형에 사용하는 경우.
*/

int& ReturnRef()	// int& num1 = returnRef(); - returnRef()의 함수 내부의 num이라는 공간에 숫자 20을 넣고 5를 더한다. num의 별명을 num1로 하겠다.
					//							  문제는 num이라는 지역 변수는 함수가 종료되면 소멸한다.
					//							  댕글링 레퍼런스 (이미 소멸된 변수를 참조하려고 하는 문제). 어떤 컴파일러 환경에서 실행하느냐에 따라 결과 값이 달라진다.
{
	int num = 20;
	num += 5;
	return num;
}

//	구조체 배열
//	아이템, 상점, 인벤토리
//	방해요소 (선인장, 선인장의 크기 - 작은 것 / 큰 것)
//	슬라임 3종류 - 작은 슬라임, 중간 슬라임, 큰 슬라임
//	참조자에 이 개념을 대입해본다.

void PlayerInput()	// 함수 이름 : PlayerInput | 매개변수 0개
{
	std::cout << std::endl << "PlayerInput 함수 실행" << std::endl << std::endl;
}
void PlayerInput(int& a, int& b)
{
	a += 1;
	b += 1;
}

// c++에서는 typedef 선언이 없어도, struct 이름으로 타입과 구조체를 동시에 선언하여 사용할 \ 수 있다.
struct Pos {
	int x;
	int y;
};

void PlayerInput(Pos& PlayerPos) // 구조체도 참조자를 사용할 수 있다!
{
	PlayerPos.x += 1;
	PlayerPos.y += 1;
}

int main()
{
	std::cout << "Ch3! 구조체와 참조자" << std::endl;

	int PlayerX = 0, PlayerY = 0;
	PlayerInput(PlayerX, PlayerY);

	PlayerInput();

	std::cout << "PlayerInput 출력 결과" << std::endl;
	std::cout << "x의 값 : " << PlayerX << ", " << "y의 값 : " << PlayerY << std::endl;

	Pos PlayerPos = { PlayerX, PlayerY };
	PlayerInput(PlayerPos);
	std::cout << "PlayerInput 출력 결과" << std::endl;
	std::cout << "x의 값 : " << PlayerPos.x << ", " << "y의 값 : " << PlayerPos.y << std::endl;

	
	
}