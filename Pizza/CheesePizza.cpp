#include "CheesePizza.h"


CheesePizza::CheesePizza(){ }

void CheesePizza::prepare()
{
	cout << "ġ������ �غ� ��" << endl;
}

void CheesePizza::bake()
{
	cout << "ġ������ ���� ��" << endl;
}

void CheesePizza::cut()
{
	cout << "ġ������ �ڸ��� ��" << endl;
}

void CheesePizza::box()
{
	cout << "ġ������ ���� ��" << endl;
}

string CheesePizza::toString() {
	return string("ġ������");
}