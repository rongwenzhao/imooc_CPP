#pragma once
#include<string>
using namespace std;
class Person{
public:
	Person(string name);
	virtual ~Person();
	virtual void work() = 0;
private:
	string m_strName;
};

