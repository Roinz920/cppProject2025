#pragma once
#include <iostream>
#include <Windows.h>
#include <string_view>
#include <list>
#include <chrono>
#include <functional>

using Clock_time = std::chrono::steady_clock;
using ClockDuration_time = Clock_time::duration;
using ClockPoint_time = Clock_time::time_point;
using PlayTime_time = std::chrono::nanoseconds;

class Line
{
private:

public:
	using time_t = PlayTime_time;
	using datalist_t = std::list<time_t>;
	using callback_t = std::function<void(std::string_view)>;

	Line(datalist_t data, time_t perpect, time_t _near, time_t miss, callback_t callback)
		: m_data(std::move(data)), 
		m_Judge(perpect),
		m_Near(_near),
		m_Miss(miss), 
		m_Callback(callback)
	{}
	~Line() {}

	void update(time_t input);
	void hit(time_t input);

	const datalist_t& data() const { return m_data; }
	size_t size() const { return m_data.size(); }
	bool empty() const { return m_data.empty(); }
private:
	datalist_t m_data;
	time_t m_Judge;
	time_t m_Near;
	time_t m_Miss;
	callback_t m_Callback;

};

inline void GOTOXY(int x, int y) { SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), COORD{ (short)x, (short)y }); }

