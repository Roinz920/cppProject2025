#include "Line.h"

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
		m_Callback("m");
		popping();
	}


}

void Line::hit(time_t input)
{
}
