#include "Person_02.h"
#include<iostream>
using namespace std;

Person_02::Person_02(){
	m_strName = "hello";
	cout<<"Person_02()"<<endl;
}

Person_02::~Person_02(){
	cout << "~Person_02()" << endl;
}

void Person_02::play() {
	cout << "Person_02 play()" << endl;
}
void Person_02::play(int x) {
	cout << "Person_02 play(int x)" << endl;
}
void Person_02::eat() {
	cout << "Person_02 name " << m_strName << endl;
	cout << "Person_02 eat()" << endl;
}


