#pragma once
#include<string>
using namespace std;
class Worker_01{
public:
	Worker_01(string code = "001");
	virtual ~Worker_01();
	void carry();
protected:
	string m_strCode;
};

