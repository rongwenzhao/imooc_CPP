#pragma once
class Coordinate_02{
public:
	Coordinate_02(int x,int y);
	~Coordinate_02();
	void setX(int x);
	int getX();
	void setY(int y);
	int getY();

private:
	int m_iX;
	int m_iY;
};

