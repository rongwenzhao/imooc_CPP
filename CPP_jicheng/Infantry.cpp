#include "Infantry.h"
#include<iostream>
using namespace std;

Infantry::Infantry(string name, string code){
	m_strName = name;
	m_strCode = code;
	cout << "Infantry" << endl;
}

Infantry::~Infantry(){
	cout << "~Infantry" << endl;
}

void Infantry::attack() {
	cout<<"Infantry::attack"<<endl;
}
