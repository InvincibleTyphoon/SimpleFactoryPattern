#include "VeggiPizza.h"


VeggiPizza::VeggiPizza() { }

void VeggiPizza::prepare()
{
	cout << "��ä���� �غ� ��" << endl;
}

void VeggiPizza::bake()
{
	cout << "��ä���� ���� ��" << endl;
}

void VeggiPizza::cut()
{
	cout << "��ä���� �ڸ��� ��" << endl;
}

void VeggiPizza::box()
{
	cout << "��ä���� ���� ��" << endl;
}

string VeggiPizza::toString() {
	return string("��ä����");
}