#include "Comp.h"

TProcessor::TProcessor() {}

TProcessor::TProcessor(double power)
{
	this->power = power;
}

TProcessor::~TProcessor() {}

double TProcessor::GetPower()
{
	return this->power;
}





TComputer::TComputer(string brand, double price, TProcessor* proc)
{
	this->brand = brand;
	this->price = price;
	this->processor = proc;
}

TComputer::~TComputer()
{
	delete processor;
}

string TComputer::getBrand()
{
	return this->brand;
}

double TComputer::getPrice()
{
	return this->price;
}

TProcessor* TComputer::getProcessor()
{
	return this->processor;
}





TDesktopComputer::TDesktopComputer(string brand, double price, TProcessor* proc, int ms) : TComputer(brand, price, proc)
{
	this->MonitorSize = ms;
}

TDesktopComputer::~TDesktopComputer() {}

void TDesktopComputer::PrintAll()
{
	cout << "Brand: " << getBrand() << endl;
	cout << "Price: " << getPrice() << "$" << endl;
	cout << "Processor power: " << getProcessor()->GetPower() << " MHz" << endl;
	cout << "Monitor size: " << MonitorSize << " inches" << endl;
}
