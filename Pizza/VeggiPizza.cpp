#include "VeggiPizza.h"


VeggiPizza::VeggiPizza() { }

void VeggiPizza::prepare()
{
	cout << "야채피자 준비 중" << endl;
}

void VeggiPizza::bake()
{
	cout << "야채피자 굽는 중" << endl;
}

void VeggiPizza::cut()
{
	cout << "야채피자 자르는 중" << endl;
}

void VeggiPizza::box()
{
	cout << "야채피자 포장 중" << endl;
}

string VeggiPizza::toString() {
	return string("야채피자");
}