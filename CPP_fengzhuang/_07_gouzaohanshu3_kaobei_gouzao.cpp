/**
	拷贝构造函数
*/



#include<stdlib.h>
#include"Teacher_02.h"

int main_ggg() {
	/*
	注意：对于拷贝构造函数，是在如下地方调用的
	1、同类型复制
	2、函数的参数是对象，调用该函数时会以实参对象为模本拷贝实现形式参数对象
	3、函数的返回值是对象类型，在接收返回值处会调用拷贝复制函数，来生成新的对象并赋值给调用返回处。

	一般不需要我们重新实现，只知道此时会调用拷贝构造函数就可以了。

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