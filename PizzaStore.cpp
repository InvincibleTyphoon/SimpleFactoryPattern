#include "PizzaStore.h"



PizzaStore::PizzaStore()
{
}

Pizza* PizzaStore::orderPizza(const string& type)
{
	SimplePizzaFactory factory;
	Pizza* pizza = factory.createPizza(type);

	//예외처리 : 없는 종류의 피자를 주문 한 경우
	if (pizza == NULL)
	{
		cout << "Unknown Pizza type : " << type << endl;
		return NULL;
	}

	pizza->prepare();
	pizza->bake();
	pizza->cut();
	pizza->box();

	return pizza;
}