#include "Solider_03.h"
#include<iostream>
using namespace std;

Solider_03::Solider_03(string name, string code){
	m_strName = name;
	m_strCode = code;
	cout<<"Solider_03()"<<endl;
}

Solider_03::~Solider_03(){
	cout << "~Solider_03()" << endl;
}

Solider_03::Solider_03(const Solider_03& solider_03) {
	cout << "~Solider_03(&)" << endl;
}

void Solider_03::work() {
	cout << "Solider_03::m_strName = " << m_strName << endl;
	cout << "Solider_03::m_strCode = " << m_strCode << endl;
	cout << "Solider_03::work()" << endl;
}
