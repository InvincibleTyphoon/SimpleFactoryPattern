#include "PepperoniPizza.h"


PepperoniPizza::PepperoniPizza() { }

void PepperoniPizza::prepare()
{
	cout << "���۷δ����� �غ� ��" << endl;
}

void PepperoniPizza::bake()
{
	cout << "���۷δ����� ���� ��" << endl;
}

void PepperoniPizza::cut()
{
	cout << "���۷δ����� �ڸ��� ��" << endl;
}

void PepperoniPizza::box()
{
	cout << "���۷δ����� ���� ��" << endl;
}

string PepperoniPizza::toString() {
	return string("���۷δ�����");
}