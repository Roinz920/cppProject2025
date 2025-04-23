#pragma once
#include "Common.h"

class Gun
{

};

class Human
{

};

class Police : public Human
{
private:
	Gun* gun;
};

class Student : public Human
{

};