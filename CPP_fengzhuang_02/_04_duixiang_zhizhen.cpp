#include<iostream>
#include<stdlib.h>
#include"Coordinate.h"
using namespace std;

/*
	����ָ��
*/

/*
Ҫ��
		����Coordinate��
		���ݳ�Ա��m_iX��m_iY
		��������ָ�룬��ͨ��ָ���������

		���������㣬�ᣬ������ĺ͡�

*/

int main_ddd() {

/*	�������еĶ���
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

	//����ջ�еĶ���
	Coordinate p1;
	Coordinate* p2 = &p1;//p2ָ��ջ�еĶ���p1
	p2->m_iX = 40;
	p2->m_iY = 50;

	cout << p1.m_iX << p1.m_iY << endl;//��ӡ������֤������ָ��p2�����ļ�Ϊp1��������ݳ�Ա��


	system("pause");
	return 0;
}