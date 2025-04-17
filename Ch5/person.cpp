#include "person.h"

/*
*	얕은 복사 : 데이터의 값을 그대로 다른 변수에 가져오는 것. 매우 직관적. 크기가 작을 때 사용
*	깊은 복사 : 주소를 새로 할당해서 값을 복사해 저장하는 것. 새로운 메모리 공간이 할당 됨.
*/



//		   ↓스코프 연산자 (::)
void Person::Clone(const Person& other)
{
	// 얕은 복사 -> 깊은 복사로 변경해줘야 함
	age = other.age;	// 얕은 복사
	name = new char[strlen(other.name) + 1];	// 새로운 메모리 공간 생성
	strcpy(name, other.name); // 깊은 복사
}

void Person::Show() const
{
	cout << "나이 : " << age << endl;
	cout << "이름 : " << name << endl;
}
