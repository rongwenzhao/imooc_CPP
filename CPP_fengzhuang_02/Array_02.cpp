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
		�Ա��ں������ڶ�������ĵ�ַ������˳�򣬶Ա���ʽ������ַ������˳��
		���۲�ñ��������β�ѹջ��˳��
		�۲���ۣ��β�˳���Ƿ��ģ�����������ѹ��ջ��
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
