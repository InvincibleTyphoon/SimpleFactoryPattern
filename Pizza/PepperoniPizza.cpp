#include "PepperoniPizza.h"


PepperoniPizza::PepperoniPizza() { }

void PepperoniPizza::prepare()
{
	cout << "페퍼로니피자 준비 중" << endl;
}

void PepperoniPizza::bake()
{
	cout << "페퍼로니피자 굽는 중" << endl;
}

void PepperoniPizza::cut()
{
	cout << "페퍼로니피자 자르는 중" << endl;
}

void PepperoniPizza::box()
{
	cout << "페퍼로니피자 포장 중" << endl;
}

string PepperoniPizza::toString() {
	return string("페퍼로니피자");
}