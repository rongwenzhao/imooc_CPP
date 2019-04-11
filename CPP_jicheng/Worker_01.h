#pragma once
#include "Person_01.h"
#include<string>
using namespace std;
class Worker_01 : virtual public Person_01{
public:
	Worker_01(string code = "001",string color = "blue");
	virtual ~Worker_01();
	void carry();
protected:
	string m_strCode;
};

