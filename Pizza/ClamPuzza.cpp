#include "ClamPuzza.h"


ClamPizza::ClamPizza() { }

void ClamPizza::prepare()
{
	cout << "�������� �غ� ��" << endl;
}

void ClamPizza::bake()
{
	cout << "�������� ���� ��" << endl;
}

void ClamPizza::cut()
{
	cout << "�������� �ڸ��� ��" << endl;
}

void ClamPizza::box()
{
	cout << "�������� ���� ��" << endl;
}

string ClamPizza::toString() {
	return string("��������");
}