#include "Coordinate_02.h"
#include<iostream>
using namespace std;

Coordinate_02::Coordinate_02(int x,int y){
	m_iX = x;
	m_iY = y;
	cout << "Coordinate_02() " << m_iX << "," << m_iY << endl;
}

Coordinate_02::~Coordinate_02(){
	cout << "~Coordinate_02() " << m_iX << "," << m_iY << endl;
}

void Coordinate_02::setX(int x) {
	m_iX = x;
}

int Coordinate_02::getX() {
	return m_iX;
}

void Coordinate_02::setY(int y) {
	m_iY = y;
}

int Coordinate_02::getY() {
	return m_iY;
}