#include "Line.h"

// 검증을 위한 판정결과 출력 함수
void draw_result(std::string_view type, std::chrono::milliseconds relTime, std::chrono::milliseconds absTime)
{
	std::cout << type << ":" << (relTime.count() > 0 ? "" : "+") << -(relTime.count()) << "ms" << std::endl;
}
void draw_result(std::string_view type, PlayTime_time relTime, PlayTime_time absTime)
{
	draw_result(type, std::chrono::duration_cast<std::chrono::milliseconds>(relTime), std::chrono::duration_cast<std::chrono::milliseconds>(absTime));
}


void Line::update(time_t input)
{
	if (m_data.empty())
	{
		return;
	}

	auto note = m_data.front();
	auto hit = input - note;
	auto popping = [this]() {m_data.pop_front(); };

	if (hit > m_Miss)
	{
		draw_result("Miss", hit, note);
		m_Callback("M");
		popping();
	}
}

void Line::hit(time_t input)
{
	if (m_data.empty())
	{
		return;
	}

	auto note = m_data.front();	// 노트 패턴을 외부 data로 부터 자동으로 받아오는데, 가장 첫 문자열을 인식하는 것
	auto hit = input - note;	// 노트가 판정을 위한 범위에 들어왔을 때에 키 입력을 받아 판정을 하기 위한 변수
	auto popping = [this]() {m_data.pop_front(); };	// 판정이 끝난 노트의 문자열을 제거하고 다음 문자열을 준비하기 위한 설정

	if (hit < m_Miss)
	{
		return;
	}
	else if (hit < -m_Near) // 판정의 조건
	{
		draw_result("Miss", hit, note);  // 화면에 출력될 판정 내용
		m_Callback("EM");				 // Score 계산을 위한 외부 함수에서 인자로 사용될 변수인 callback에 저장될 내용
	}
	else if (hit < -m_Judge)
	{
		draw_result("Early", hit, note);
		m_Callback("E");
	}
	else if (hit < m_Judge)
	{
		draw_result("Perpect", hit, note);
		m_Callback("P");
	}
	else if (hit < m_Near)
	{
		draw_result("Late", hit, note);
		m_Callback("L");
	}
	else if (hit < m_Miss)
	{
		draw_result("Miss", hit, note);
		m_Callback("LM");
	}	
	popping();
}
