#pragma once
#include "Person.h"
class Worker : public Person{
public:
	Worker(string name,int age);
	~Worker();
	//virtual void work();
private:
	int m_iAge;
};

