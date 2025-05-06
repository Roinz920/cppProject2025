
// 콘솔 유틸리티 함수
// Image 클래스
// ImageModel 객체 구조체
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
	actor.Tell("토끼", "따뜻한 봄날이야.");
	Sleep(3000);
	actor.Tell("토끼", "산책하기 딱 좋은 날씨네!");
	Sleep(3000);
	rabbit.moveForward( 5, 5, 10, 50);
	rabbit.moveReverse(15, 5, 10, 50);
	rabbit.moveForward( 5, 5, 10, 50);
	rabbit.moveReverse(15, 5, 10, 50);

	Image rabbit2(model.rabbit2Art, 21);
	rabbit2.show(50, 0);
	actor.Tell("나레이션", "산책 중에 친구를 만났어요.");
	actor.Tell("친구토끼", "기분 좋아보이네? 무슨 일 있어?");
	actor.Selection("토끼", "날씨가 너무 좋아서 그래", "얼굴 보니 너무 좋아. 같이 카페라도 갈래?");



	while (true);
}