#include<iostream>
#include<stdio.h>
using namespace std;

//�����ռ�demo
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
	//1���������Demo
	/*int imoocDemo1();
	imoocDemo1();*/

	//�����ռ�Demo
//	namespaceDemo();

//}

//Ľ�������������ʾ
int imoocDemo1() {
	cout << "hello" << endl;
	//����һ����������8���ƣ�10���ƣ�16���ƣ���ӡ����Ļ��
	cout << "����һ����������8���ƣ�10���ƣ�16���ƣ���ӡ����Ļ��" << endl;
	int x = 0;
	cin >> x;
	cout << oct << x << endl;
	cout << dec << x << endl;
	cout << hex << x << endl;

	//����һ������ֵ(0����1)���Բ�����ʽ��ӡ����Ļ��
	cout << "������һ������ֵ(0��1)" << endl;
	bool y = false;
	cin >> y;
	cout << boolalpha << y << endl;

	system("pause");
	return 0;
}