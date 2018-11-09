#include <iostream>
#include "Pizza/Pizza.h"
#include "PizzaStore.h"

int main() 
{
	PizzaStore pizzaStore;

	Pizza* pizza = pizzaStore.orderPizza("cheese");
	cout << pizza->toString() << endl;

	pizza = pizzaStore.orderPizza("clam");
	cout << pizza->toString() << endl;

	pizza = pizzaStore.orderPizza("veggi");
	cout << pizza->toString() << endl;

	pizza = pizzaStore.orderPizza("pepperoni");
	cout << pizza->toString() << endl;

	pizza = pizzaStore.orderPizza("mint");
	cout << pizza->toString() << endl;



	return 0;
}