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

	//type을 기준으로 피자를 리턴
	//만약 없는 타입이라면 NULL 리턴
	Pizza* createPizza(const string& type);
};

