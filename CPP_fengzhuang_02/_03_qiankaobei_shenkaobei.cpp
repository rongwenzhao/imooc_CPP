#include<iostream>
#include<stdlib.h>
#include"Array.h"
using namespace std;


/*
对象的深拷贝与浅拷贝
*/

/*
示例安排：
	1、	定义一个Array类，数据成员为m_iCount，
		成员函数包括数据封装函数、构造函数、拷贝构造函数和析构函数，
		通过此示例体会浅拷贝原理。

	2、	增加成员函数m_pArr,并增加m_pArr地址查看函数，同时改造构造函数、
		拷贝构造函数和析构函数，体会深拷贝的原理和必要性。
*/

int main() {

	Array arr1;
	arr1.setCount(5);

	Array arr2(arr1);

	cout << "arr2.m_iCount" << arr2.getCount() << endl;
	/*
	示例安排1中的运行效果:
			Array()  //调用arr1的构造函数
			Array(const Array& arr)//调用arr2的拷贝构造函数
			arr2.m_iCount5  //打印arr2的效果
			请按任意键继续. . .
			~Array()  //arr2的析构函数
			~Array()  //arr1的析构函数
	*/

	system("pause");
	return 0;
}