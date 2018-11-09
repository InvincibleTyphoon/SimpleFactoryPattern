#pragma once
#include <iostream>
#include "Pizza.h"

using namespace std;

class ClamPizza : public Pizza
{
public:
	ClamPizza();
	void prepare() override;
	void bake() override;
	void cut() override;
	void box() override;
	string toString() override;
};

