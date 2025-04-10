/*
*	Date : 2025-04-10
	Name : 김정민
	Subject :C언어와 C++ 언어의 공통점과 차이점
*/

// # 공통점 #
// 1. 기본적 문법은 일치
// 2. 변수, 반복문(for, while), 제어문 (if, switch)
// 3. 배열, 함수
// 3. 포인터, 구조체, 파일 입출력

// # 차이점 #
// 1. 입출력 사용하는 함수 변경 (참조자)
// 2. 구조체 선언 이름으로만 선언을 하여도 된다.
// 3. 함수 기능 추가 (오버로딩, 디폴트 연산자)
// 4. 객체(calss) 지향 프로그래밍

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // c형태의 입 출력 방식을 구현해 볼 것
#include <iostream> //  cpp 형태의 입출력 라이브러리

int main()
{
	//캐릭터 이름 입력 후 출력
	char name[20];// 공통 사용 방식

	printf("c 입출력 코드\n");
	printf("캐릭터 이름을 입력하세요\n");
	scanf("%s", name);
	printf("캐릭터 이름 : %s\n\n", name);

	// cpp 입출력 style
	std::cout << "cpp 입출력 코드" << std::endl;
	std::cout << "이름을 입력해주세요." << std::endl;
	std::cin >> name;
	std::cout << "캐릭터 이름 :" << name << std::endl;

	// 새로운 문법 (cpp)
	// 1. 이름::								- namespace 
	// 2. printf("%s",name)	→ cout << name		- 연산자 오버로딩
	// 3. 개행문자 \n		→ std::endl
}