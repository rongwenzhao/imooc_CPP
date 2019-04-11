#pragma once
#include "Person_03.h"
#include<string>
using namespace std;
class Solider_03 : public Person_03{
public:
	Solider_03(string name="Merry",string code="001");
	Solider_03(const Solider_03& solider_03);
	~Solider_03();
	void work();

protected:
	string m_strCode;
};

