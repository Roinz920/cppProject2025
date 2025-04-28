#include "Base.h"

void Base::Do()
{
	cout << "Base Do" << endl;
}

void Derived::Do()
{
	Base::Do();
	cout << "Drived Do" << endl;
}
	