/*
*	Date : 2025-04-16
	Name : 김정민
	Subject : 얕은 복사, 깊은 복사
*/

#include "Common.h"
#include "person.h"

void Example()
{
	//	정수를 저장하는 데이터 타입 변수 2개 선언.
	int numA = 10;
	//	numB, numA에 저장되어있는 값을 B에 옮기고 싶다.
	//	numA의 값을 numB에 복사하고 싶다.
	int numB = numA;	// 대입연산자 : (=)의 오른쪽에 있는 내용을 왼쪽에 대입하라. | numA를 인식 -> 정수 10 인식 -> 왼쪽에 대입 -> numB에 정수 10 대입

	//	정수의 주소를 저장하는 변수 2개 선언
	int* numAptr = &numA;	// &numA를 인식 -> numA의 16진수 주소 인식 -> 인쪽에 대입 numAptr라는 16진수 주소에 numA의 16진수 주소 대입
	int* numBptr = numAptr;

	//	numBptr에 들어간 주소와 numAptr에 들어단 주소, numA의 주소는 모두 같습니까?
	//	→ 

	cout << "numA의 주소 : " << &numA << endl;
	cout << "numAptr의 값 : " << numAptr << endl;
	cout << "numBptr의 값 : " << numBptr << endl;
	cout << "numAptr의 주소 : " << &numAptr << endl;
	cout << "numBptr의 주소 : " << &numBptr << endl;

	// 변수끼리 대입연산자 사용한 경우
	// numA, numB 각각 다른 공간에 존재
	// 주소끼리 대입연산자 사용한 경우
	// 주소가 가리키는 값이 같다.

	// numA, numAptr, numBptr 주소의 값이 모두 동일하다.
	// 해당 주소를 하나의 변수에서 제거하면, 다른 변수에서도 접근할 수 없게 된다. (memoryallocate를 사용하여 삭제시키게 될 경우)
}

int main()
{
	cout << "Ch5 : 데이터 복사" << endl;
	//Example();

	//Person human1 = { 20 }; // human1이라는 공간에 데이터를 복사해서 넣어줘야한다. (초기화)
	Person human1 = { 20, "모험가"}; // 2번째에 들어가는 영역(name)에는 const char로 지정된다.
	Person human1Clone;		//
	human1Clone.Clone(human1);
	human1.Show();
	human1Clone.Show();
}