#pragma once
#include <string>
#include "Pizza/Pizza.h"
#include "Pizza/CheesePizza.h"
#include "Pizza/ClamPuzza.h"
#include "Pizza/PepperoniPizza.h"
#include "Pizza/VeggiPizza.h"
#include "SimplePizzaFactory.h"

class PizzaStore
{
public:
	PizzaStore();
	
	Pizza* orderPizza(const string& type);
};

