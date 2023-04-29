#include "Dot.h"

#include <iostream>
using namespace std;

TDot::TDot() {}

TDot::TDot(double x)
{
	this->x = x;
}

TDot::TDot(double x, double y)
{
	this->x = x;
	this->y = y;
}

TDot::~TDot() {}

void TDot::PrintAll()
{
	cout << "Print All:" << endl;
	cout << "Dot x: " << this->x << endl;
	cout << "Dot y: " << this->y << endl;
}




TColorDot::TColorDot() {}

TColorDot::TColorDot(double x)
{
	this->x = x;
}

TColorDot::TColorDot(double x, double y)
{
	this->x = x;
	this->y = y;
}

TColorDot::TColorDot(double x, double y, unsigned long color)
{
	this->x = x;
	this->y = y;
	this->color = color;
}

TColorDot::~TColorDot() {}

void TColorDot::SetX(double val)
{
	this->x = val;
}

double TColorDot::GetX()
{
	return this->x;
}

void TColorDot::SetY(double val)
{
	this->y = val;
}

double TColorDot::GetY()
{
	return this->y;
}

void TColorDot::SetColor(unsigned long val)
{
	this->color = val;
}

unsigned long TColorDot::GetColor()
{
	return this->color;
}

void TColorDot::Print—oordinates()
{
	cout << "Dot x: " << this->x << endl;
	cout << "Dot y: " << this->y << endl;
}

void TColorDot::PrintAll()
{
	cout << '\t' << '\t' << '\t' << "Print All: " << endl;
	Print—oordinates();
	cout << "Dot color: " << this->color << endl;
	cout << endl << endl;
}
