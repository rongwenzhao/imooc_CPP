#pragma once
#include<string>
using namespace std;
class Farmer_01{
public:
	Farmer_01(string name = "Jack");
	virtual ~Farmer_01();
	void sow();

protected:
	string m_strName;
};

