#include "CheesePizza.h"


CheesePizza::CheesePizza(){ }

void CheesePizza::prepare()
{
	cout << "치즈피자 준비 중" << endl;
}

void CheesePizza::bake()
{
	cout << "치즈피자 굽는 중" << endl;
}

void CheesePizza::cut()
{
	cout << "치즈피자 자르는 중" << endl;
}

void CheesePizza::box()
{
	cout << "치즈피자 포장 중" << endl;
}

string CheesePizza::toString() {
	return string("치즈피자");
}