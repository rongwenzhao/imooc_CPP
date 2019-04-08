#include "Line2.h"
#include<iostream>
using namespace std;

Line2::Line2(int x1,int y1,int x2,int y2){
	cout << "Line2()" << endl;
	m_pCoorA = new Coordinate_02(x1,y1);
	m_pCoorB = new Coordinate_02(x2,y2);
}

Line2::~Line2(){
	cout << "~Line2()" << endl;
	delete m_pCoorA;
	delete m_pCoorB;
	m_pCoorA = NULL;
	m_pCoorB = NULL;
}

void Line2::printInfo() {
	cout << "printInfo()" << endl;
	cout << "(" << m_pCoorA->getX() << "," << m_pCoorA->getY() << ")" << endl;
	cout << "(" << m_pCoorB->getX() << "," << m_pCoorB->getY() << ")" << endl;
}
