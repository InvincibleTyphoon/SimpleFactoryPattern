#include "PizzaStore.h"



PizzaStore::PizzaStore()
{
}

Pizza* PizzaStore::orderPizza(const string& type)
{
	SimplePizzaFactory factory;
	Pizza* pizza = factory.createPizza(type);

	//����ó�� : ���� ������ ���ڸ� �ֹ� �� ���
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