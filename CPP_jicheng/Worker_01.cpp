#include "Worker_01.h"
#include<iostream>

Worker_01::Worker_01(string code){
	m_strCode = code;
	cout<<"Worker_01()"<<endl;
}

Worker_01::~Worker_01(){
	cout << "~Worker_01()" << endl;
}

void Worker_01::carry() {
	cout << m_strCode << endl;
	cout << "Worker_01 carry()" << endl;
}
