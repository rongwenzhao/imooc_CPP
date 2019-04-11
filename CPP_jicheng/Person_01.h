#pragma once
#include<string>
using namespace std;
class Person_01{
public:
	Person_01(string color = "blue");
	~Person_01();
	void printColor();
protected:
	string m_strColor;
};

