#include<iostream>
#include<stdlib.h>
#include"Coordinate.h"
using namespace std;

/*��������
Ҫ��
	����Coordinate��
	���ݳ�Աm_iX��m_iY
	�ֱ��ջ�Ͷ���ʵ��������Ϊ3�Ķ�������
	�������е�Ԫ�طֱ�ֵ
	������������

*/


int main_aaa() {
	Coordinate coor[3];
	coor[0].m_iX = 3;
	coor[0].m_iY = 5;

	for (int i = 0; i < 3; i++)	{
		cout << "coor " << i << " " << coor[i].m_iX << endl;
		cout << "coor " << i << " " << coor[i].m_iY << endl;
	}

	//�漰��ָ�����
	Coordinate *p = new Coordinate[3];
	//pָ������� [0] [1] [2]
	//��ʱpָ��Ԫ��[0]�ĵ�ַ
	p->m_iX = 4;
	p->m_iY = 6;

	p = p + 1;//��ʱ��pָ��Ԫ��[1] �ĵ�ַ
	p->m_iX = 200;
	p->m_iY = 400;

	p = p + 1;//��ʱ��pָ��Ԫ��[2] ��λ��
	p->m_iX = 2000;
	p->m_iY = 4000;

	//[0][1][2]
	for (int i = 0; i < 3; i++){
		cout << "p array " << 3 - i << " " << p->m_iX << endl;
		cout << "p array " << 3 - i << " " << p->m_iY << endl;
		p--;
	}
	//����3��֮��pָ��[0] Ԫ�ص�ǰһ��λ�ã���ʱ��Ҫ��p��ָ��[0]Ԫ�أ�������p++����
	p++;
	delete []p;
	p = NULL;

	system("pause");
	return 0;
}