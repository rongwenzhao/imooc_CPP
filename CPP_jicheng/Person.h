#pragma once
#include <string>
using namespace std;
class Person{
public:
	Person();
	~Person();
	void eat();
	int m_iAge;
private:
	string m_strName;
};

