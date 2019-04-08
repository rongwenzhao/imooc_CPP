#include<iostream>
#include<stdlib.h>
#include"Coordinate.h"
using namespace std;

/*对象数组
要求：
	定义Coordinate类
	数据成员m_iX和m_iY
	分别从栈和堆中实例化长度为3的对象数组
	给数组中的元素分别赋值
	遍历两个数组

*/


int main_aaa() {
	Coordinate coor[3];
	coor[0].m_iX = 3;
	coor[0].m_iY = 5;

	for (int i = 0; i < 3; i++)	{
		cout << "coor " << i << " " << coor[i].m_iX << endl;
		cout << "coor " << i << " " << coor[i].m_iY << endl;
	}

	//涉及到指针操作
	Coordinate *p = new Coordinate[3];
	//p指向的数组 [0] [1] [2]
	//此时p指向元素[0]的地址
	p->m_iX = 4;
	p->m_iY = 6;

	p = p + 1;//此时，p指向元素[1] 的地址
	p->m_iX = 200;
	p->m_iY = 400;

	p = p + 1;//此时，p指向元素[2] 的位置
	p->m_iX = 2000;
	p->m_iY = 4000;

	//[0][1][2]
	for (int i = 0; i < 3; i++){
		cout << "p array " << 3 - i << " " << p->m_iX << endl;
		cout << "p array " << 3 - i << " " << p->m_iY << endl;
		p--;
	}
	//运算3此之后，p指向[0] 元素的前一个位置，此时需要将p再指向[0]元素，所以做p++操作
	p++;
	delete []p;
	p = NULL;

	system("pause");
	return 0;
}