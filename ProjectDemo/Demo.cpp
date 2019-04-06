#include<iostream>
#include<stdio.h>
using namespace std;

//命名空间demo
namespace A {
	int x = 1;
	void fun() {
		cout << "A" << endl;
	}
}

namespace B {
	int x = 2;
	void fun() {
		cout << "B" << endl;
	}
	void fun2() {
		cout << "2B" << endl;
	}
}

using namespace B;
void namespaceDemo() {
	cout << A::x << endl;
	B::fun();
	fun2();
}

//int main() {
	//1、输入输出Demo
	/*int imoocDemo1();
	imoocDemo1();*/

	//命名空间Demo
//	namespaceDemo();

//}

//慕课网输入输出演示
int imoocDemo1() {
	cout << "hello" << endl;
	//输入一个整数，以8进制，10进制，16进制，打印到屏幕上
	cout << "输入一个整数，以8进制，10进制，16进制，打印到屏幕上" << endl;
	int x = 0;
	cin >> x;
	cout << oct << x << endl;
	cout << dec << x << endl;
	cout << hex << x << endl;

	//输入一个布尔值(0或者1)，以布尔方式打印到屏幕上
	cout << "请输入一个布尔值(0、1)" << endl;
	bool y = false;
	cin >> y;
	cout << boolalpha << y << endl;

	system("pause");
	return 0;
}