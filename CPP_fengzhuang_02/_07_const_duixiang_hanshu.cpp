#include<iostream>
#include<stdlib.h>
#include"Line_03.h"
using namespace std;

/*
	const 对象 成员函数  指针  引用
*/

/*	常对象成员，常函数，常对象
要求：
	定义两个类：
		坐标类：Coordinate_03
		数据成员：横坐标m_iX，纵坐标m_iY
		成员函数：构造函数、析构函数、数据封装函数

		线段类：Line_03
		数据成员：点A m_coorA，点B m_coor_B
		成员函数：构造函数、析构函数、数据封装函数、信息打印函数
*/



int main() {

	Line_03 line(1,2,3,4);
	line.printInfo();
	line.printInfo222();

	const Line_03 line_02(3,4,5,6);
	line_02.printInfo();
	
	const Line_03& line_03 = line;
	const Line_03& line_04 = line;
	cout << &line << " " << &line_03 << " " << &line_04 << endl;

	system("pause");
	return 0;
}