#include "Person.h"
#include<iostream>

Person::Person(){
	cout<<"Person()"<<endl;
}

Person::~Person(){
	cout << "~Person()" << endl;
}

void Person::eat() {
	cout << "eat()" << endl;
}
