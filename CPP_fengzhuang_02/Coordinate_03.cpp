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

void Coordinate_03::setX(int x) {//������£�setX(Coordinate_03 *this,int x),�˴�thisָ�����ж�дȨ��
	m_iX = x;
}

int Coordinate_03::getX() const {//������Ĳ���Ĭ����getX(const Coordinate_03 *this)���˴�this�ǳ�����ָ�룬�����޸Ķ�������ݳ�Ա��
	return m_iX;
}

void Coordinate_03::setY(int y) {
	m_iY = y;
}

int Coordinate_03::getY() const {
	return m_iY;
}