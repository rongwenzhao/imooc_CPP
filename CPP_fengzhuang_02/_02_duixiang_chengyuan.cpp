#include<iostream>
#include<stdlib.h>
#include "Line.h"
using namespace std;
/*
	对象成员
要求：
	定义两个类：
		坐标类：Coordinate_02
		数据成员：横坐标m_iX，纵坐标m_iY
		成员函数：构造函数、析构函数、数据封装函数

		线段类：Line
		数据成员：点A m_coorA，点B m_coor_B
		成员函数：构造函数、析构函数、数据封装函数、信息打印函数
*/


int main() {

	//实验一
	Line* p = new Line(1, 2, 3, 4);
	p->printInfo();
	delete p;
	p = NULL;

	/*
	运行结果：
		Coordinate_02()
		Coordinate_02()
		Line()
		~Line()
		~Coordinate_02()
		~Coordinate_02()

		即：先构造对象成员，再构造Line对象，析构时相反。
	*/

	//实验二
	//我们希望在线段的构造处可以初始化两个点，而不是生成Line对象后再设置点的坐标。
	//此时需要改造类的结构。

	//已改造
	/*
		运行结果：

		Coordinate_02() 1,2
		Coordinate_02() 3,4
		Line()
		(1,2)
		(3,4)
		~Line()
		~Coordinate_02() 3,4
		~Coordinate_02() 1,2
	*/


	system("pause");
	return 0;
}