//const demo
#pragma once
#include"Coordinate_03.h"
class Line_03 {
public:
	Line_03(int x1, int y1, int x2, int y2);
	~Line_03();
	void printInfo();
	void printInfo() const;
	void printInfo222() const;

private:
	//��ʱΪ�������Ա
	const Coordinate_03* m_pCoorA;
	Coordinate_03* m_pCoorB;
};