#pragma once
#include <string>
#include "Pizza/Pizza.h"
#include "Pizza/CheesePizza.h"
#include "Pizza/ClamPuzza.h"
#include "Pizza/PepperoniPizza.h"
#include "Pizza/VeggiPizza.h"

class SimplePizzaFactory
{
public:
	SimplePizzaFactory();

	//type�� �������� ���ڸ� ����
	//���� ���� Ÿ���̶�� NULL ����
	Pizza* createPizza(const string& type);
};

