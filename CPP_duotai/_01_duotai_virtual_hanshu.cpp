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
ʵ��һ��
	����Shape���е�calcArea()����Ϊvirtual�����麯����������Shape��Circle��Rect�����Ͼ�˵���˶�̬�����⣺

	������̬���ڷ�װ���̳еĻ����ϣ����ò�ͬ�������ͬ�������в�ͬ��ִ���߼���
	C++ʹ��virtual�ؼ���ʵ�ֵġ�

	���嵽�﷨���ϣ����Ǹ���ָ��ָ��������󣬲����Ե�������ķ�����
*/

/*
ʵ�������̬��̬���ڵ����⣺�ڴ�й©


��̬��̬���������ء�
��̬��̬��virtual�ؼ���ʵ�ֵġ�
ʹ��virtual��������������ʹ���Ϊ�������������Ӷ��ڶ�̬��̬�У������ø���ָ���ͷ����������ڴ档

virtual�ں����е�ʹ�����ƣ�
	1����ͨ�����������麯������virtual�ؼ������εı�������ĳ�Ա���������������ᱨ�������
	2����ľ�̬��Ա�������ܱ�virtual���Ρ���Ϊ��̬��Ա�����������κ�һ��������������ͬ�������ģ�������virtual����Ҳ�ᱨ�������
	3����������inline��������������������������������inline�ؼ��֣�ʹ�ú�����Ϊvirtual������
	4���������ι��캯������Ȼ��������

*/

/*
ʵ���������������������ʵ����
	��Circle��Ĺ��캯���ж�̬���������ڴ棬���������ͷŸ��ڴ棬��ʾʵ������ڴ�й©����ͨ����������������������⡣

*/

int main_aaa() {

	Shape* shape1 = new Rect(4, 6);
	Shape* shape2 = new Circle(5);


	shape1->calcArea();
	shape2->calcArea();
	//shape2->Shape::calcArea();

	delete shape1;
	shape1 = NULL;

	delete shape2;
	shape2 = NULL;


	system("pause");
	return 0;
}