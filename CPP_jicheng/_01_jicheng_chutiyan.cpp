#include<iostream>
#include<stdlib.h>
#include"Worker.h"
using namespace std;

/*
	继承
		要求：
			1、定义Person类，要求有m_strName和m_iAge两个数据成员及构造和析构函数、eat函数
			2、定义Worker类，要求公有继承Person类，含有数据成员_iSalary、构造、析构、work函数

*/


/*
	注意：B类从A类继承，B类有A类的所有数据成员，只是有些有访问权限，有些无访问权限。
*/

int main() {

	Worker* worker = new Worker();
	//worker->m_iAge = 10;
	worker->m_iSalary = 1000;
	//worker->eat();
	worker->work();
	//cout<<worker->m_iAge<<" "<<worker->m_iSalary<<endl;


	int a = 10;
	string abc = "abcedgdsdhsfjgshs";
	cout<<"sizeof(int)"<<sizeof(a)<<" "<<"sizeof(string) "<<sizeof(abc)<<endl;

	cout << "sizeof(*worker)" << sizeof(*worker) << endl;
	delete worker;
	worker = NULL;
	
	system("pause");
	return 0;
}