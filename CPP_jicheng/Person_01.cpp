#include "Person_01.h"
#include <iostream>

Person_01::Person_01(string color){
	m_strColor = color;
	cout<<"Person_01()"<<endl;
}

Person_01::~Person_01(){
	cout << "~Person_01()" << endl;
}

void Person_01::printColor() {
	cout << " m_strColor: " << m_strColor << endl;
	cout << "Person_01 printColor()" << endl;
}
