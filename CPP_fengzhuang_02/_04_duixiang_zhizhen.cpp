#include<iostream>
#include<stdlib.h>
#include"Coordinate.h"
using namespace std;

/*
	对象指针
*/

/*
要求：
		定义Coordinate类
		数据成员：m_iX和m_iY
		声明对象指针，并通过指针操作对象

		计算两个点，横，纵坐标的和。

*/

int main_ddd() {

/*	操作堆中的对象
	Coordinate* p1 = NULL;
	p1 = new Coordinate();
	p1->m_iX = 20;
	p1->m_iY = 30;

	Coordinate *p2 = new Coordinate();
	(*p2).m_iX = 50;
	(*p2).m_iY = 60;

	cout << "sum x " << p1->m_iX + (*p2).m_iX << endl;
	cout << "sum y " << p1->m_iY + (*p2).m_iY << endl;

	delete p1;
	p1 = NULL;

	delete p2;
	p2 = NULL;
	*/

	//操作栈中的对象
	Coordinate p1;
	Coordinate* p2 = &p1;//p2指向栈中的对象p1
	p2->m_iX = 40;
	p2->m_iY = 50;

	cout << p1.m_iX << p1.m_iY << endl;//打印正常，证明对象指针p2操作的即为p1对象的数据成员。


	system("pause");
	return 0;
}