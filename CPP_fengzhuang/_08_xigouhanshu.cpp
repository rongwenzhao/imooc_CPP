/**
	析构函数

释放资源。
*/



/**
	题目
Teacher_02类
要求：
	1、自定义析构函数
	2、普通方式实例化的对象，在销毁对象时是否自动调用析构函数
	3、通过拷贝构造函数实例化对象，在销毁对象时是否调用析构函数
*/

#include"Teacher_02.h"
#include<stdlib.h>

void test(Teacher_02 t) {

}

int main() {

	Teacher_02 t1;
	Teacher_02 t2(t1);
	//在堆中生成并释放。
	Teacher_02 *p = new Teacher_02();
	delete p;

	test(t1);
	system("pause");
	return 0;
}