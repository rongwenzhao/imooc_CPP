#include<iostream>
#include<stdlib.h>
#include"Array.h"
using namespace std;


/*
����������ǳ����
*/

/*
ʾ�����ţ�
	1��	����һ��Array�࣬���ݳ�ԱΪm_iCount��
		��Ա�����������ݷ�װ���������캯�����������캯��������������
		ͨ����ʾ�����ǳ����ԭ��

	2��	���ӳ�Ա����m_pArr,������m_pArr��ַ�鿴������ͬʱ���칹�캯����
		�������캯����������������������ԭ��ͱ�Ҫ�ԡ�
*/

int main() {

	Array arr1;
	arr1.setCount(5);

	Array arr2(arr1);

	cout << "arr2.m_iCount" << arr2.getCount() << endl;
	/*
	ʾ������1�е�����Ч��:
			Array()  //����arr1�Ĺ��캯��
			Array(const Array& arr)//����arr2�Ŀ������캯��
			arr2.m_iCount5  //��ӡarr2��Ч��
			�밴���������. . .
			~Array()  //arr2����������
			~Array()  //arr1����������
	*/

	system("pause");
	return 0;
}