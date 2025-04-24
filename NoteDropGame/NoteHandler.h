#pragma once

// 노트에 등장하는 노트를 설명하는 툴팁 만들기.

class NoteHandler
{
	virtual void DrawNote();
	void NoteMove();
	void NoteInput();
};



class Note : NoteHandler
{
	void DrawNote() override;
	void NoteMove();
};



class LongNote : NoteHandler
{
	void DrawNote() override;
	void NoteMove();
};



