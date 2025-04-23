#pragma once
#include "Common.h"

//	å. -> ����Ʈ ���� ȹ��, ���丮 ���� ȹ��, ��ų ȹ�� ���
//	Quest Book, Story Book, Spell Book

//	��� å���� �ؾ��ϴ� ���?
//	���� (�д´�)

//	����� 3���� ���
//	private, protected, public  ���
//	protected: �� private�� ������ �ڵ���� 'protected:���'���� �����´�.
//	private:? protected:?, public:? �� ���� ������ ����

class BookMark
{
	int page;

public:
	void ShowPage();
};

// �Ʒ��� Ŭ���� ����� ������ ������ �ִ� �ڵ��Դϴ�.
// Book�� �ݵ�� BookMark Ŭ������ ����ؾ��ϸ� �Ѵ�.
// ��, ��Ȳ�� ���� �ʿ���� �ڵ尡 �߰��ȴٴ� ��
// ����� ���� �ؾ��ϴ°�? Is-A ���� Has-A����
// (B) IS-A		: B�� A�̴�.
// (B) Has-A	: B�� A�� ������ �ִ�.

/*public BookMark*/	//	'å'�� 'å����'�̴�. �� 'å'�� 'å����'�� ������ �ִ�. | 'å'�� 'å����'�� �� ������ ���� ���� �ִ� ��Ȳ�� ����.
class Book 
{
private:
	BookMark* bookMark; //	BookMark* bookMark = NULL; �̶�� ���� ���� �� �ִ�!
public:
	void Read();
};

class SpellBook : public Book	// Book Ŭ������ �ִ� public ������ �״�� �������ڴٴ� ��� ���
{

};

class StoryBook : public Book
{

};

class QuestBook : public Book
{

};