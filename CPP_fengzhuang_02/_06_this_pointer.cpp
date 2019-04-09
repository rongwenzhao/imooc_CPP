#include<iostream>
#include<stdlib.h>
#include"Array_02.h"
using namespace std;

/*
	this指针
*/

/*
示例要求：

	定义一个Array_02类
	数据成员 ： m_iLen;
	成员函数：
		构造函数
		析构函数
		len的封装函数
		信息输出函数 printInfo

*/


int main() {
	//下例说明this是什么东西，同时也证明C++中引用并没有生成新的对象。
	//若不使用返回引用，直接返回对象，即声明成Array_02 Array_02::printInfo() {}这样子，那会生成新的临时变量并赋值给外部调用者。
	//this本身就是指针，它指向当前对象的地址，对象内部需要返回当前对象，需要写成(*this)，即(*this)表示当前对象。
	Array_02 arr1(10);
	Array_02 arr2 = arr1.printInfo(); //以arr1.printInfo()返回的(*this)对象为模型，调用arr2的拷贝构造函数生成对象arr2。
	cout << "addr of arr1 " << &arr1 << endl;//证明对象中this的值与该对象的地址是一样的
	cout << "addr of *this ref " << &(arr1.printInfo()) << endl;//打印值与this值一样，证明arr1.printInfo()返回 (*this) 的引用并没有生成新的对象。


	arr1.test(10,20,30,40,50);//证明函数参数表的压栈顺序，具体结论见函数定义部分。



	system("pause");
	return 0;
}