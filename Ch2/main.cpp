/*
*	Date : 2025-04-11
	Name : 김정민
	Subject : 참조자 // C, cpp의 차이점, 참조자
*/

#include <iostream>

/*
*	참조자 이해를 위한 Swap 함수의 구현
*/
void SwapByValue(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
	// SwapByValue main에 호출했을 때에 num1, num2에 전달한 변수가 실제로 변경되는가? → X
}

void SwapByRef(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

//	함수 오버로딩, 함수의 명칭이 동일해도 매개변수의 타입이 다를 때에는 다른 함수로 판별함
void SwapByRef(int& num1, int& num2)	// &num1 - 변수의 주소를 반환하라
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

//	문제1. SwapPointer 함수를 만든다. 주소를 참조자로 변경하는 함수를 만든다.
// int type

//	변수만 참조자로 만들수 있는가? → No. 주소, 배열 원소 참조자로 만들 수 있음
//	int arr[3] = {1,2,3};
//	int& arrRef1 = arr[0];	// arrRef1은 arr[0]의 별명이다.

//	int num1 = 10;
//	int* num1ptr = &num1;
//	int*  &num1ptr = num1ptr; num1ref는 num1ptr의 별명이다.

//	int형 포인터 (int*) 변수 2개를 바꾼다
void SwapPointer(int*& num1ptr, int*& num2ptr)
{
	int* temp = num1ptr;
	num1ptr = num2ptr;
	num2ptr = temp;
}

int main()
{
	//	namespace std로 정이외더있는 공간 안에 cout 가져와서 사용
	std::cout << "2강_참조자" << std::endl;

	// 참조자 (문법) 또한 선언과 사용이 구분된다.
	// 함수도 선언과 사용이 구분된다.

	int num1; // 선언
	num1 = 1; // 초기화

	int* num1ptr = &num1;	// num1ptr 포인터 변수에 num1의 주소를 저장한다. 마찬가지로 선언과 초기화 필요

	int& num1ref = num1;	// num1 변수를 참조하는 num1ref. num1ref는 num1의 참조자이다. ( num1의 별명을 추가해주겠다. 그 별명은 num1ref이다. )

	// int num2 = num1;		// 이 시점에서의 num1의 값은 1이다.
	// num1 = num1 + 1;		// 이 시점에서의 num2의 값는 2이다.

	num1ref += 1;

	std::cout << "num1의 값 : " << num1 << std::endl;		// 변수의 출력을 cpp 형식으로 작성
	std::cout << "num1의 값을 num1ref의 참조자로 호출 : " << num1ref << std::endl;	// 2;

	//	A. 개(A의 별명)
	//	A야 사과 먹어
	//	개야 사과 먹어

	// 참조자의 사용처?

	int input = 0;
	// scanf("%d", &input);
	// C++에서는 참조자를 사용해서 함수를 사용할 때에, *, & 기호를 사용하지 않고 표현할 수 있다.
	// std::cin >> input;

	std::cout << "Call by Value와 Call By Reffernce 예졔" << std::endl;

	int value1 = 10, value2 = 20;

	std::cout << "Call By Value 결과" << std::endl;
	std::cout << "value1 : " << value1 << " value2 : " << value2 << std::endl;
	SwapByValue(value1, value2);
	std::cout << "value1 : " << value1 << " value2 : " << value2 << std::endl;

	std::cout << "Call By Ref 결과" << std::endl;
	std::cout << "value1 : " << value1 << " value2 : " << value2 << std::endl;
	SwapByRef(&value1, &value2);
	std::cout << "value1 : " << value1 << " value2 : " << value2 << std::endl;

	std::cout << "Call By Ref 결과" << std::endl;
	std::cout << "value1 : " << value1 << " value2 : " << value2 << std::endl;
	SwapByRef(value1, value2);
	std::cout << "value1 : " << value1 << " value2 : " << value2 << std::endl;

	std::cout << "참조자의 응용 결과" << std::endl;

	int ssnum1 = 5;
	int ssnum2 = 100;

	int* ssnum1ptr = &ssnum1;
	int* ssnum2ptr = &ssnum2;
	std::cout << "ssnum1ptr로부터 값 출력 : " << *ssnum1ptr << std::endl;
	std::cout << "ssnum2ptr로부터 값 출력 : " << *ssnum2ptr << std::endl;

	SwapPointer(ssnum1ptr, ssnum2ptr);

	std::cout << "ssnum1ptr로부터 값 출력 : " << *ssnum1ptr << std::endl;
	std::cout << "ssnum2ptr로부터 값 출력 : " << *ssnum2ptr << std::endl;

	//	참조자를 사용하면 포인터에 사용 된 기호를 1개 줄여서 표현할 수 있다.
	//	int, int끼리 바꿀 때에는 참조자를 사용한다.
	//	int*, int*끼리 바꿀 때에는 int*&, int*&

	//	참조자 사용 시 주의사항

	//	int의 참조자 선언 시, int& numref (※ 이름을 의미있게 작성하는 것이 중요)
	//	int& AAA; [error_1] 반드시 선언과 동시에 초기화해야 함
	int AAA = 10;
	int& AAAref = AAA; // [error_1]의 해결 결과

	//	const를 활용하여 함수를 사용하는 사람에게 가이드를 안내해줄 것
	// void Func(const int* num1); num1을 참조하는 값을 변경하지 말라
	// void Func(const int& num1); num1의 참조 값을 변경하지 말라

	//	return 타입의 참조자를 선언할 때에 주의해야 함

	//	main 함수에서의 선언	|	함수의 값 리턴 (int Func())				|	함수에서 참조자 리턴 (int& Func())
	//	int a = func();			|	a의 값이 복사 됨						|	a에 값이 복사 됨. func 안에서 지역 변수를 return하지 않아야 함
	//	int& a = func();		|	a는 func리턴 값을 별명으로 한다.		|	func안에 지역변수를 return하지 않아야 함
	//								예시] a별명에 10을 별명으로 한다.
	//								a=9; 10을 9로 하라 → 컴파일 에러 발생
	//	const int& a = func();	|	a의 별명을 10의 별명으로 한다			|	func 안에서 지역 변수를 return하지 않아야 함.	
	//							| 10의 별명을 a라고 한다.
	//							| const int& = 10;

}