#include "SimplePizzaFactory.h"



SimplePizzaFactory::SimplePizzaFactory()
{
}

Pizza* SimplePizzaFactory::createPizza(const string& type)
{
	Pizza * pizza = NULL;

	if (type.compare("cheese") == 0)
		pizza = new CheesePizza();
	else if (type.compare("pepperoni") == 0)
		pizza = new PepperoniPizza();
	else if (type.compare("clam") == 0)
		pizza = new ClamPizza();
	else if (type.compare("veggi") == 0)
		pizza = new VeggiPizza();
	
	return pizza;
}