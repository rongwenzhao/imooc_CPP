#include<iostream>
#include<stdlib.h>
#include"Array_02.h"
using namespace std;

/*
	thisָ��
*/

/*
ʾ��Ҫ��

	����һ��Array_02��
	���ݳ�Ա �� m_iLen;
	��Ա������
		���캯��
		��������
		len�ķ�װ����
		��Ϣ������� printInfo

*/


int main() {
	//����˵��this��ʲô������ͬʱҲ֤��C++�����ò�û�������µĶ���
	//����ʹ�÷������ã�ֱ�ӷ��ض��󣬼�������Array_02 Array_02::printInfo() {}�����ӣ��ǻ������µ���ʱ��������ֵ���ⲿ�����ߡ�
	//this�������ָ�룬��ָ��ǰ����ĵ�ַ�������ڲ���Ҫ���ص�ǰ������Ҫд��(*this)����(*this)��ʾ��ǰ����
	Array_02 arr1(10);
	Array_02 arr2 = arr1.printInfo(); //��arr1.printInfo()���ص�(*this)����Ϊģ�ͣ�����arr2�Ŀ������캯�����ɶ���arr2��
	cout << "addr of arr1 " << &arr1 << endl;//֤��������this��ֵ��ö���ĵ�ַ��һ����
	cout << "addr of *this ref " << &(arr1.printInfo()) << endl;//��ӡֵ��thisֵһ����֤��arr1.printInfo()���� (*this) �����ò�û�������µĶ���


	arr1.test(10,20,30,40,50);//֤�������������ѹջ˳�򣬾�����ۼ��������岿�֡�



	system("pause");
	return 0;
}