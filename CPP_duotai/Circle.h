#pragma once
#include "Shape.h"
#include"Coordinate.h"
class Circle : public Shape{
public:
	Circle(double r);
	~Circle();
	virtual double calcArea();
protected:
	double m_dR;
	Coordinate *m_coorCenter;
};

