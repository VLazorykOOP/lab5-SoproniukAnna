#pragma once

class TDot
{
public:
	double x = 0;
	double y = 0;

	TDot();
	TDot(double x);
	TDot(double x, double y);
	~TDot();
	void PrintAll();
};

class TColorDot : TDot
{
private:
	unsigned long color = 0;
public:
	TColorDot();
	TColorDot(double x);
	TColorDot(double x, double y);
	TColorDot(double x, double y, unsigned long color);
	~TColorDot();

	void SetX(double val);
	double GetX();
	void SetY(double val);
	double GetY();
	void SetColor(unsigned long val);
	unsigned long GetColor();

	void Print—oordinates();
	void PrintAll();
};
