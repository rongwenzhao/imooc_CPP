#include<iostream>
#include<stdlib.h>

#include"Infantry.h"

using namespace std;

/*
多重继承
	要求：
		1、Person_03类，数据成员：m_strName，成员函数：构造，析构，play()
		2、Solider_03即Soldier_03类（士兵类），数据成员m_strCode，成员函数：构造，析构，work()
		3、Infantry类（步兵类），数据成员，无，成员函数：构造，析构，attack()
		4、定义函数test_1(Person p) test_2(Person &p) test_3(Person *p)
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
	 说明，无论子类跟父类，间接父类有多深的层级，跟上层都是is a的关系。
	*/

	system("pause");
	return 0;
}