//#pragma once
//#pragma once 的作用跟下面实现的宏编译效果一样。
#ifndef COORDINATE_03_H
#define COORDINATE_03_H
class Coordinate_03 {
public:
	Coordinate_03(int x, int y);
	~Coordinate_03();
	void setX(int x);
	int getX() const;
	void setY(int y);
	int getY() const;

private:
	int m_iX;
	int m_iY;
};

#endif //COORDINATE_03_H