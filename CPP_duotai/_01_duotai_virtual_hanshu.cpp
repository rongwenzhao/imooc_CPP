#include<iostream>
#include<stdlib.h>
#include"Circle.h"
#include"Rect.h"
#include"Shape.h"
using namespace std;

/*
	��̬��̬���麯��
*/
/*
	Ҫ��
		1������Shape�࣬������calcArea()�����죬����
		2������Rect�࣬������calcArea()�����죬����
					   ���ݣ�m_dWidth��m_dHeight
		3������Circle�࣬������calcArea()�����죬����
					   ���ݣ�m_dR
*/

/*
	����Shape���е�calcArea()����Ϊvirtual�����麯����������Shape��Circle��Rect�����Ͼ�˵���˶�̬�����⣺

	������̬���ڷ�װ���̳еĻ����ϣ����ò�ͬ�������ͬ�������в�ͬ��ִ���߼���
	C++ʹ��virtual�ؼ���ʵ�ֵġ�
*/

int main() {

	Shape* shape1 = new Rect(4, 6);
	Shape* shape2 = new Circle(5);


	shape1->calcArea();
	shape2->calcArea();

	delete shape1;
	shape1 = NULL;

	delete shape2;
	shape2 = NULL;


	system("pause");
	return 0;
}