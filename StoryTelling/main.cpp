
// �ܼ� ��ƿ��Ƽ �Լ�
// Image Ŭ����
// ImageModel ��ü ����ü
// Actor - Tell(), Selection()

#include "Console.h"
#include "ImageModel.h"
#include <iostream>
#include "Image.h"
#include "Actor.h"


int main()
{
	ImageModel model;
	Console::CursorVisible(false);
	Actor actor;
	
	Image rabbit(model.rabbitArt, 16);
	rabbit.show(5, 5);
	actor.Tell("�䳢", "������ �����̾�.");
	Sleep(3000);
	actor.Tell("�䳢", "��å�ϱ� �� ���� ������!");
	Sleep(3000);
	rabbit.moveForward( 5, 5, 10, 50);
	rabbit.moveReverse(15, 5, 10, 50);
	rabbit.moveForward( 5, 5, 10, 50);
	rabbit.moveReverse(15, 5, 10, 50);

	Image rabbit2(model.rabbit2Art, 21);
	rabbit2.show(50, 0);
	actor.Tell("�����̼�", "��å �߿� ģ���� �������.");
	actor.Tell("ģ���䳢", "��� ���ƺ��̳�? ���� �� �־�?");
	actor.Selection("�䳢", "������ �ʹ� ���Ƽ� �׷�", "�� ���� �ʹ� ����. ���� ī��� ����?");



	while (true);
}