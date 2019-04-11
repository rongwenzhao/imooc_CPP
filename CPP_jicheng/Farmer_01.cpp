#include "Farmer_01.h"
#include<iostream>

Farmer_01::Farmer_01(string name,string color):Person_01("Farmer " + color){
	m_strName = name;
	cout<<"Farmer_01() "<<endl;
}

Farmer_01::~Farmer_01(){
	cout << "~Farmer_01() " << endl;
}

void Farmer_01::sow() {
	cout<<m_strName<<endl;
	cout << "Farmer_01 sow() " << endl;
}
