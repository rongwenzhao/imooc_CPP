#include<iostream>
#include<stdlib.h>

#include"Infantry.h"

using namespace std;

/*
���ؼ̳�
	Ҫ��
		1��Person_03�࣬���ݳ�Ա��m_strName����Ա���������죬������play()
		2��Solider_03��Soldier_03�ࣨʿ���ࣩ�����ݳ�Աm_strCode����Ա���������죬������work()
		3��Infantry�ࣨ�����ࣩ�����ݳ�Ա���ޣ���Ա���������죬������attack()
		4�����庯��test_1(Person p) test_2(Person &p) test_3(Person *p)
*/

void test_1(Person_03 p) {
	p.paly();
}

void test_2(Person_03& p) {
	p.paly();
}

void test_3(Person_03* p) {
	p->paly();
}

int main_ddd() {
	
	Infantry i;
	test_1(i);
	test_2(i);
	test_3(&i);
	/*
	 ˵����������������࣬��Ӹ����ж���Ĳ㼶�����ϲ㶼��is a�Ĺ�ϵ��
	*/

	system("pause");
	return 0;
}