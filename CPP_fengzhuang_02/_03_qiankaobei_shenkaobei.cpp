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

	/*ʾ��1��demo
	Array arr1;
	arr1.setCount(5);

	Array arr2(arr1);

	cout << "arr2.m_iCount" << arr2.getCount() << endl;
	*/
	/*
	ʾ������1�е�����Ч��:
			Array()  //����arr1�Ĺ��캯��
			Array(const Array& arr)//����arr2�Ŀ������캯��
			arr2.m_iCount5  //��ӡarr2��Ч��
			�밴���������. . .
			~Array()  //arr2����������
			~Array()  //arr1����������
	*/


	//ʾ��2
	Array arr1(5);
	Array arr2(arr1);

	arr1.printAddr();
	arr2.printAddr();

	arr1.printArr();
	arr2.printArr();

	//����������н����
						/*
									Array()
									Array(const Array& arr)
									m_pArr : 009EE550
									m_pArr : 009F0368
									array item info
									0
									1
									2
									3
									4
									array item info
									0
									1
									2
									3
									4
									�밴���������. . .
									~Array() and m_pArr = 009F0368
									~Array() and m_pArr = 009EE550	
						*/

	system("pause");
	return 0;
}