#include<iostream>
#include<stdlib.h>
#include"Person.h"
#include"Worker.h"
#include"Dustman.h"


using namespace std;

/*
		纯虚函数：
			只有函数声明，virtual void func() = 0;
			此形式即为纯虚函数。
			当然，纯虚函数也必须为某个类的成员函数。
			在该类的虚函数表中，该虚函数的指针的值为0，即没有虚函数作为指向。

		抽象类：

			含有纯虚函数的类称为抽象类。
			抽象类是不允许实例化对象的。（你用抽象类的对象调用纯虚函数，是错误的，所以不允许实例化对象。）
*/

/*
	纯虚函数抽象类 题目要求：
	1、Person类，成员函数：构造函数，虚析构函数，纯虚函数work，数据成员：名字m_strName
	2、Worker类，成员函数：构造函数，work，数据成员：年龄m_iAge；
	3、Dustman类（清洁工类），成员函数：构造函数，work。
*/


int main_ddd() {

	//Person p;
	//Worker w("ll",23);
	Dustman dustman("zhangsan",23);

	system("pause");
	return 0;
}