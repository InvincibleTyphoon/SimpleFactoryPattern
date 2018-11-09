#pragma once
#include <iostream>
#include "Pizza.h"

using namespace std;

class CheesePizza : public Pizza
{
public:
	CheesePizza();
	void prepare() override;
	void bake() override;
	void cut() override;
	void box() override;
	string toString() override;
};

