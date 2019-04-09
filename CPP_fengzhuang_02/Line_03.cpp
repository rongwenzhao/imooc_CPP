#include "Line_03.h"
#include<iostream>
using namespace std;

Line_03::Line_03(int x1, int y1, int x2, int y2) {
	cout << "Line2()" << endl;
	m_pCoorA = new Coordinate_03(x1, y1);
	m_pCoorB = new Coordinate_03(x2, y2);
}

Line_03::~Line_03() {
	cout << "~Line2()" << endl;
	delete m_pCoorA;
	delete m_pCoorB;
	m_pCoorA = NULL;
	m_pCoorB = NULL;
}

void Line_03::printInfo() {
	cout << "printInfo()" << endl;
	cout << "(" << m_pCoorA->getX() << "," << m_pCoorA->getY() << ")" << endl;
	cout << "(" << m_pCoorB->getX() << "," << m_pCoorB->getY() << ")" << endl;
}

void Line_03::printInfo() const {
	cout << "printInfo() const" << endl;
	cout << "(" << m_pCoorA->getX() << "," << m_pCoorA->getY() << ")" << endl;
	cout << "(" << m_pCoorB->getX() << "," << m_pCoorB->getY() << ")" << endl;
}

void Line_03::printInfo222() const {
	cout << "printInfo222() const" << endl;
}
