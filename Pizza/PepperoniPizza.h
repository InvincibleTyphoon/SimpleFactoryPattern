#pragma once
#include <iostream>
#include "Pizza.h"

using namespace std;

class PepperoniPizza : public Pizza
{
public:
	PepperoniPizza();
	void prepare() override;
	void bake() override;
	void cut() override;
	void box() override;
	string toString() override;
};

