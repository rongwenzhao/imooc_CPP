#include<iostream>
#include<stdlib.h>
#include "Line.h"
using namespace std;
/*
	�����Ա
Ҫ��
	���������ࣺ
		�����ࣺCoordinate_02
		���ݳ�Ա��������m_iX��������m_iY
		��Ա���������캯�����������������ݷ�װ����

		�߶��ࣺLine
		���ݳ�Ա����A m_coorA����B m_coor_B
		��Ա���������캯�����������������ݷ�װ��������Ϣ��ӡ����
*/


int main() {

	//ʵ��һ
	Line* p = new Line(1, 2, 3, 4);
	p->printInfo();
	delete p;
	p = NULL;

	/*
	���н����
		Coordinate_02()
		Coordinate_02()
		Line()
		~Line()
		~Coordinate_02()
		~Coordinate_02()

		�����ȹ�������Ա���ٹ���Line��������ʱ�෴��
	*/

	//ʵ���
	//����ϣ�����߶εĹ��촦���Գ�ʼ�������㣬����������Line����������õ�����ꡣ
	//��ʱ��Ҫ������Ľṹ��

	//�Ѹ���
	/*
		���н����

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