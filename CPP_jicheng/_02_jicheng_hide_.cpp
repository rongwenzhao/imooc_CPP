#include<iostream>
#include<stdlib.h>
#include"Solider.h"
#include"Person_02.h"
using namespace std;


/*
	����
		1��������ø����ͬ�����ݳ�Ա
		2�������븸�෽��ͬ�������۲����Ƿ�һ�£��������أ����������ع�ϵ

		����Ĵ�����Ҫ��ʾ�������֪ʶ�㡣

		��Person_02
		��Solider
*/

int main_bbb() {

	Solider solider;
	solider.Person_02::eat();

	solider.play();
	solider.play(5);

	solider.Person_02::play();
	solider.Person_02::play(4);
	solider.Person_02::eat();

	system("pause");
	return 0;
}