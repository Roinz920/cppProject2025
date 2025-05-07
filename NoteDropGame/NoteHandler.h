#pragma once

#include "Common.h"
#include "Line.h"

// 노트에 등장하는 노트를 설명하는 툴팁 만들기.

class NoteHandler
{
private:
	Line* m_Line[4];
	size_t m_BPM;

public:
	NoteHandler(Line* line1, Line* line2, Line* line3, Line* line4, size_t BPM)
		: m_Line{ line1, line2, line3, line4 }, m_BPM(BPM)
	{
		//if (!line1 || !line2 || !line3 || !line4)
		//{
		//	abort();
		//}
	}

	~NoteHandler() {}

	void Rendering(Line::time_t input) const;
};



