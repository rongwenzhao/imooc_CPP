#include<iostream>
#include<stdlib.h>
#include"Line_03.h"
using namespace std;

/*
	const ���� ��Ա����  ָ��  ����
*/

/*	�������Ա����������������
Ҫ��
	���������ࣺ
		�����ࣺCoordinate_03
		���ݳ�Ա��������m_iX��������m_iY
		��Ա���������캯�����������������ݷ�װ����

		�߶��ࣺLine_03
		���ݳ�Ա����A m_coorA����B m_coor_B
		��Ա���������캯�����������������ݷ�װ��������Ϣ��ӡ����
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