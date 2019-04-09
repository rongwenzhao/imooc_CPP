#include "Array_02.h"
#include<iostream>
using namespace std;

Array_02::Array_02(int len){
	this->len = len;
}

Array_02::~Array_02(){

}

void Array_02::setLen(int len) {
	this->len = len;
}

int Array_02::getLen() {
	return len;
}

Array_02& Array_02::printInfo() {
	cout << "this value: " << this << endl;
	return *this;
}

/*
		对比在函数体内定义变量的地址的增长顺序，对比形式参数地址的增长顺序，
		来观察该编译器对形参压栈的顺序。
		观察结论，形参顺序是反的，即从右向左压的栈。
*/
void Array_02::test(int a, int b, int c, int d, int e) {
	cout << "a = " << a << " &a = " << &a << endl;
	cout << "b = " << b << " &b = " << &b << endl;
	cout << "c = " << c << " &c = " << &c << endl;
	cout << "d = " << d << " &d = " << &d << endl;
	cout << "e = " << e << " &e = " << &e << endl;

	int i = 100;
	int j = 200;
	int k = 300;
	cout << "i = " << i << " &i = " << &i << endl;
	cout << "j = " << j << " &j = " << &j << endl;
	cout << "k = " << k << " &k = " << &k << endl;
}
