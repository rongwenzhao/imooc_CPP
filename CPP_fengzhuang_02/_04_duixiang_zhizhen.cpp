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

int main() {

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


	system("pause");
	return 0;
}