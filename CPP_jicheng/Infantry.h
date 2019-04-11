#pragma once
#include "Solider_03.h"
class Infantry : public Solider_03{
public:
	Infantry(string name = "Jack",string code = "002");
	~Infantry();
	void attack();
};

