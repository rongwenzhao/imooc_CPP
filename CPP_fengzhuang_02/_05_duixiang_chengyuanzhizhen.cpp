#include<iostream>
#include<stdlib.h>
#include"Line.h"
#include"Line2.h"
using namespace std;

/*
	对象指针
*/

/*
对象成员指针
要求：

		定义两个类：

		坐标类：Coordinate
		数据成员： 横坐标 m_iX,纵坐标m_iY
		成员函数：构造函数、析构函数、数据封装函数

		线段类：Line2
		数据成员：点A指针 m_pCoorA,点B指针 m_pCoorB
		成员函数：构造函数、析构函数、信息打印函数
*/

int main() {

	Line line(1,2,3,4);
	cout << "sizeof(line)"<<sizeof(line)<<endl; //16

	Line2 line2(4,5,6,7);
	line2.printInfo();
	cout << "sizeof(line2)" << sizeof(line2) << endl; //8

	Line2 *p = new Line2(4, 5, 6, 7);
	p->printInfo();
	cout << "sizeof(Line2)" << sizeof(line2) << endl; //8
	cout << "sizeof(p)" << sizeof(p) << endl; //4
	delete p;
	p = NULL;

	system("pause");
	return 0;
}