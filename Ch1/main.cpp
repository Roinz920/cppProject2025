#include <iostream>	//입출력 함수 사용을 위한 cpp 라이브러리

/*
*	cpp에 추가된 문법을 이해한다
*	1. std:: 분석
*	2. 코드에서 "std::"를 지워보기
*	3. 결과 : '식별자 "cout"이 정이되어 있지 않습니다.
*	→	Q.] iostream을 추가했는데 왜 cout를 찾을 수 없는가요?
*		A.] "cout"가 특별한 공간에 존재하기 때문에 찾을 수 없음
*		Q2.] 그 특별한 공간을 어떻게 사용해야 할까요?\
*		A2.] namespace에 대한 이해가 필요합니다.
*/

//	A회사 ACOM, B회사 BCOM
//	ACOM에서 만든 goods, BCom에서 만든 goods
//	문제점 : 특정 키워드의 이름들이 같다면 컴퓨터가 구분해서 판별할 수 없다. (에러 발생)
//	변수의 이름 앞에 이름 공간을 추가해준다.


namespace ACOM
{
	char goods[10];
	int sum;
}

namespace BCOM
{
	char goods[10];
	int sum;
}

int main()
{
	std::cout << "Ch1" << std::endl;
	std::cout << "소주제 : 이름 공간(namespace)에 대한 이해" << std::endl;

	//	이름 공간의 첫번째 예제
	//	같음 이름의 변수를 사용하는 문법이 추가됨
	//	사용법 : 이름::변수;


	std::cin >> ACOM::goods;
	std::cout << "A회사의 상품 이름 : " << ACOM::goods << std::endl;

	std::cin >> BCOM::goods;
	std::cout << "B회사의 상품 이름 : " << BCOM::goods << std::endl;

	//	문제1. 숫자를 5개 입력을 받아서 A회사의 합계를 저장한 다음, 숫자를 5개 입력 받아서 B회사의 합계에도 저장을 해주세요.
	//	A회사 B회사 합계 변수 이름은 int sum으로 동일하게 작성

	//	1. std::cin int 값 입력받기
	//	2. for 반복문 5회
	//	3. 이름 공간의 sum 변수에 저장하고 출력하기 

	int number;

	for (int i = 0; i < 5; i++)
	{
		std::cout << i + 1 << " A회사 상품 개수 입력 :" << std::endl;
		std::cin >> number;
		ACOM::sum += number;
	}
	std::cout << "A회사 상품 합계 : " << ACOM::sum << std::endl;

	for (int i = 0; i < 5; i++)
	{
		std::cout << i + 1 << " B회사 상품 개수 입력 :" << std::endl;
		std::cin >> number;
		BCOM::sum += number;
	}
	std::cout << "B회사 상품 합계 : " << BCOM::sum << std::endl;
}

// ToyProject → c++ 추가된 문법을 게임에 적용하는 시간.