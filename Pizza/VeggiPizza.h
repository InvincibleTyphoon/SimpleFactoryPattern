#pragma once
#include <iostream>
#include "Pizza.h"

using namespace std;

class VeggiPizza : public Pizza
{
public:
	VeggiPizza();
	void prepare() override;
	void bake() override;
	void cut() override;
	void box() override;
	string toString() override;
};

