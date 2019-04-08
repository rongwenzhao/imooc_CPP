//对象指针的使用
#include"Coordinate_02.h"
class Line2{
public:
	Line2(int x1, int y1, int x2, int y2);
	~Line2();
	void printInfo();

private:
	Coordinate_02 *m_pCoorA;
	Coordinate_02 *m_pCoorB;
};

