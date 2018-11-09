#include "ClamPuzza.h"


ClamPizza::ClamPizza() { }

void ClamPizza::prepare()
{
	cout << "조개피자 준비 중" << endl;
}

void ClamPizza::bake()
{
	cout << "조개피자 굽는 중" << endl;
}

void ClamPizza::cut()
{
	cout << "조개피자 자르는 중" << endl;
}

void ClamPizza::box()
{
	cout << "조개피자 포장 중" << endl;
}

string ClamPizza::toString() {
	return string("조개피자");
}