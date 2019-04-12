#include "Circle.h"
#include<iostream>
using namespace std;

Circle::Circle(double r){
	cout<<"Circle()"<<endl;
	m_dR = r;
	m_coorCenter = new Coordinate();
}

Circle::~Circle(){
	cout << "~Circle()" << endl;
	delete  m_coorCenter;
	m_coorCenter = NULL;
}

double Circle::calcArea() {
	cout << "Circle --> calcArea()" << endl;
	return 3.14* m_dR* m_dR;
}
