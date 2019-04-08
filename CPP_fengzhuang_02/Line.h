#include"Coordinate_02.h"
//线段类的声明
class Line{

public:
	Line(int a_x,int a_y,int b_x,int b_y);
	~Line();
	void setA(int x,int y);
	void setB(int x,int y);
	void printInfo();

private:
	Coordinate_02 m_coorA;
	Coordinate_02 m_coorB;
};

