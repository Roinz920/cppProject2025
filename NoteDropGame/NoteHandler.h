#pragma once

// ��Ʈ�� �����ϴ� ��Ʈ�� �����ϴ� ���� �����.

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



