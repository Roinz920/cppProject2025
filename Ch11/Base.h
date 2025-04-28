#pragma once

#include "Common.h"

//	기본 클래스 - 파생 클래스 

//	1. 접근 지정자 레이블 선언 
//	  private :		자기 클래스에서만 사용 가능
//	  protected :	자식 클래스에서도 사용 가능
//	  public :		모든 범위에서 사용 가능

//	2.	생성자 : 맴버 변수를 클래스 생성과 동시에 초기화 하는 문법
//		소멸자 : 클래스가 소멸 될 때에 자동으로 호출되는 함수

//	3. 메모리 누수, 동적 할당이 무엇이 문제 되는가?
//	프로그램, 앱을 오랜 기간 접속, 플레이 중 문제가 종종 발생함 (렉, 강제 종료) 
//	동적 할당 주소, 미사용 시에 메모리를 해제해야함. 
//	앱 실행 (코믹, 뉴스, ...) -> 동적할당 -> 종료 -> 재실행
//	소멸자, 스마트 포인터 (자동으로 소멸자를 실행시켜줌)


class Base
{
private:
	int count;
protected:

public:
	Base() : count(0) {}
	Base(int count) : count(count) {}
	virtual ~Base()	//가상 소멸자	
	{
		cout << "Base 클래스가 소멸되었습니다." << endl;
	}

	virtual void Do();
};

class Derived : public Base
{
private:

public:
	void Do() override;
	~Derived()
	{
		cout << "Derived 클래스가 소멸되었습니다." << endl;
	}
};

