/**
	�������캯��
*/



#include<stdlib.h>
#include"Teacher_02.h"

int main_ggg() {
	/*
	ע�⣺���ڿ������캯�����������µط����õ�
	1��ͬ���͸���
	2�������Ĳ����Ƕ��󣬵��øú���ʱ����ʵ�ζ���Ϊģ������ʵ����ʽ��������
	3�������ķ���ֵ�Ƕ������ͣ��ڽ��շ���ֵ������ÿ������ƺ������������µĶ��󲢸�ֵ�����÷��ش���

	һ�㲻��Ҫ��������ʵ�֣�ֻ֪����ʱ����ÿ������캯���Ϳ����ˡ�

	*/
	Teacher_02 t1("lilei",20);
	Teacher_02 t2 = t1;
	Teacher_02 t3(t1);

	cout << t1.getName() << " " << t1.getAge() << endl;
	cout << t2.getName() << " " << t2.getAge() << endl;
	cout << t3.getName() << " " << t3.getAge() << endl;

	system("pause");
	return 0;
}