#include<iostream>
#include<stdlib.h>
#include"Line.h"
#include"Line2.h"
using namespace std;

/*
	����ָ��
*/

/*
�����Աָ��
Ҫ��

		���������ࣺ

		�����ࣺCoordinate
		���ݳ�Ա�� ������ m_iX,������m_iY
		��Ա���������캯�����������������ݷ�װ����

		�߶��ࣺLine2
		���ݳ�Ա����Aָ�� m_pCoorA,��Bָ�� m_pCoorB
		��Ա���������캯����������������Ϣ��ӡ����
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