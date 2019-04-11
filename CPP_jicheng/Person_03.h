#pragma once
#include<string>
using namespace std;
class Person_03{
public:
	Person_03(string name="Jim");
	//Person_03(const Person_03& person_03);
	virtual ~Person_03();
	void paly();

protected:
	string m_strName;
};

