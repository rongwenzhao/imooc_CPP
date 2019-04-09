#include "Coordinate_03.h"
#include<iostream>
using namespace std;

Coordinate_03::Coordinate_03(int x, int y) {
	m_iX = x;
	m_iY = y;
	cout << "Coordinate_03() " << m_iX << "," << m_iY << endl;
}

Coordinate_03::~Coordinate_03() {
	cout << "~Coordinate_03() " << m_iX << "," << m_iY << endl;
}

void Coordinate_03::setX(int x) {//此情况下，setX(Coordinate_03 *this,int x),此处this指针是有读写权限
	m_iX = x;
}

int Coordinate_03::getX() const {//此情况的参数默认是getX(const Coordinate_03 *this)，此处this是常对象指针，不可修改对象的数据成员。
	return m_iX;
}

void Coordinate_03::setY(int y) {
	m_iY = y;
}

int Coordinate_03::getY() const {
	return m_iY;
}