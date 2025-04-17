#pragma once


#include "Common.h"

// 이름이 Person인 구조체 - 나이, 이름

/*
*	C와 C++의 차이점3. 메모리 동적 할당 (직접 메모리를 할당하는 것)
* 
*										할당할 크기
*	malloc (memory allocate) : malloc(sizedof(char)*10);
*	free (변수 이름);
* 
*	new		: cpp의 동적 할당 키워드
*	delete	: cpp에서 메모리를 해제하는 키워드
*/

/*
*	생성자 : 객체가 데이터를 생성할 때 초기화 해주는 기능
*	소멸자 : 객체가 소멸할 때 자동으로 호출되는 기능
*/

/*
*	age, name; ange = 20; name = "모험가";
*	age(agestr) - age에 외부에서 가져온 숫자(agestr)를 넣어라; , 
*	name(namestr)
*	주소 - 주소;	주소에 외부에서 가져온 주소를 넣어라 ※문제 발생 -> 중괄호 내에 기입 필요
*/

struct Person 
{
	int age;
	char* name;			// 길이의 정보가 없음. 주소로 생성하였기 때문에 메모리에 배정되어있지 않다.
	string sName;

	// 디폴트 생성자
	Person() {}

	// 가장 간단한 문자열 초기화 방식
	Person(int age, const string& sName) : age(age), sName(sName) {}

	Person(int age)
	{
		this->age = age;
	}

	// 생성자 오버로딩
	//		↓소괄호 안에 있는 것이 외부에서 가져오는 데이터
	Person(int agestr, const char* namestr) : age(agestr)
	{
		// 메모리 공간을 직접 생성해줘야 함
		name = new char[strlen(namestr) + 1];	// strlen : string의 length를 확인하는 코드. 
		// 새로 생성한 공간에 외부에 있는 데이터를 복사해서 옮겨와야 함
		strcpy(name, namestr);	
	}

	//	소멸자 : 객체가 소멸될 때에 자동으로 호출된다.
	~Person()
	{
		cout << "Person의 소멸자 호출 됨" << endl;
		delete[] name;
	}

	void Clone(const Person& other);

	void Show() const;	// 객체 안에 있는 데이터를 변경 없이 사용하겠다고 사용자에게 알려주는 것. Show() 함수 안에서 age 값을 바꾸려고 한다면, 에러가 발생
};