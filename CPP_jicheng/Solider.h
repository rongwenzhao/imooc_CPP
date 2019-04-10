#pragma once
#include "Person_02.h"
#include<string>
using namespace std;
class Solider : public Person_02 {

public:
	Solider();
	~Solider();

	void play();
	void play(int x);
	//void print();

	string m_strName;
};

