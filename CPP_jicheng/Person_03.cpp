#include "Person_03.h"
#include<iostream>
using namespace std;
Person_03::Person_03(string name){
	m_strName = name;
	cout<<"Person_03()"<<endl;
}

Person_03::~Person_03(){
	cout << "~person_03()" << endl;
}

Person_03::Person_03(const Person_03& person_03) {
	cout << "Person_03( &)" << endl;
}

void Person_03::paly() {
	cout << "Person_03::paly()" << endl;
	cout << "Person_03::m_strName " << m_strName << endl;
}
