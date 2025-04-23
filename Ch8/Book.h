#pragma once
#include "Common.h"

//	책. -> 퀘스트 정보 획득, 스토리 정보 획득, 스킬 획득 등등
//	Quest Book, Story Book, Spell Book

//	모든 책들이 해야하는 기능?
//	열람 (읽는다)

//	상속의 3가지 방법
//	private, protected, public  상속
//	protected: → private를 제외한 코드들을 'protected:방식'으로 가져온다.
//	private:? protected:?, public:? → 정보 은닉의 범위

class BookMark
{
	int page;

public:
	void ShowPage();
};

// 아래의 클레스 상속은 문제의 여지가 있는 코드입니다.
// Book은 반드시 BookMark 클래스를 상속해야하만 한다.
// 즉, 상황에 따라 필요없는 코드가 추가된다는 뜻
// 상속은 언제 해야하는가? Is-A 관계 Has-A관계
// (B) IS-A		: B는 A이다.
// (B) Has-A	: B는 A를 가지고 있다.

/*public BookMark*/	//	'책'은 '책갈피'이다. → '책'은 '책갈피'를 가지고 있다. | '책'이 '책갈피'를 안 가지고 있을 수도 있는 상황이 존재.
class Book 
{
private:
	BookMark* bookMark; //	BookMark* bookMark = NULL; 이라는 값을 넣을 수 있다!
public:
	void Read();
};

class SpellBook : public Book	// Book 클래스에 있는 public 내용을 그대로 가져오겠다는 상속 방식
{

};

class StoryBook : public Book
{

};

class QuestBook : public Book
{

};