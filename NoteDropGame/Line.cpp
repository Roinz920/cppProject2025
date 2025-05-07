#include "Line.h"

// ������ ���� ������� ��� �Լ�
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

	auto note = m_data.front();	// ��Ʈ ������ �ܺ� data�� ���� �ڵ����� �޾ƿ��µ�, ���� ù ���ڿ��� �ν��ϴ� ��
	auto hit = input - note;	// ��Ʈ�� ������ ���� ������ ������ ���� Ű �Է��� �޾� ������ �ϱ� ���� ����
	auto popping = [this]() {m_data.pop_front(); };	// ������ ���� ��Ʈ�� ���ڿ��� �����ϰ� ���� ���ڿ��� �غ��ϱ� ���� ����

	if (hit < m_Miss)
	{
		return;
	}
	else if (hit < -m_Near) // ������ ����
	{
		draw_result("Miss", hit, note);  // ȭ�鿡 ��µ� ���� ����
		m_Callback("EM");				 // Score ����� ���� �ܺ� �Լ����� ���ڷ� ���� ������ callback�� ����� ����
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
