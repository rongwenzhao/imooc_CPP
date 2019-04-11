#pragma once
#include "Person_01.h"
#include<string>
using namespace std;
class Farmer_01 : virtual public Person_01{
public:
	Farmer_01(string name = "Jack",string color = "blue");
	virtual ~Farmer_01();
	void sow();

protected:
	string m_strName;
};

