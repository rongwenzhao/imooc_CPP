#include<iostream>
#include<stdlib.h>
#include"Circle.h"
#include"Rect.h"
#include"Shape.h"
using namespace std;

/*
	动态多态、虚函数
*/
/*
	要求：
		1、定义Shape类，函数，calcArea()，构造，析构
		2、定义Rect类，函数，calcArea()，构造，析构
					   数据，m_dWidth，m_dHeight
		3、定义Circle类，函数，calcArea()，构造，析构
					   数据，m_dR
*/

/*
实验一：
	声明Shape类中的calcArea()函数为virtual，即虚函数，这样在Shape，Circle，Rect基础上就说明了多态的问题：

	即，多态是在封装，继承的基础上，调用不同子类的相同方法会有不同的执行逻辑。
	C++使用virtual关键字实现的。

	具体到语法层上，就是父类指针指向子类对象，并可以调用子类的方法。
*/

/*
实验二：动态多态存在的问题：内存泄漏


静态多态：函数重载。
动态多态：virtual关键字实现的。
使用virtual修饰析构函数，使其成为虚析构函数，从而在动态多态中，可以用父类指针释放子类对象的内存。

virtual在函数中的使用限制：
	1、普通函数不能是虚函数。即virtual关键字修饰的必须是类的成员函数，其他函数会报编译错误。
	2、类的静态成员函数不能被virtual修饰。因为静态成员函数不属于任何一个对象，它跟类是同生共死的，所以用virtual修饰也会报编译错误。
	3、不能修饰inline函数。若修饰内联函数，计算机会忽视inline关键字，使该函数成为virtual函数。
	4、不能修饰构造函数。不然会编译错误。

*/

/*
实验三：虚析构函数代码的实例。
	在Circle类的构造函数中动态申请若干内存，在析构中释放该内存，演示实验二的内存泄漏，并通过虚析构函数来解决该问题。

*/

int main_aaa() {

	Shape* shape1 = new Rect(4, 6);
	Shape* shape2 = new Circle(5);


	shape1->calcArea();
	shape2->calcArea();
	//shape2->Shape::calcArea();

	delete shape1;
	shape1 = NULL;

	delete shape2;
	shape2 = NULL;


	system("pause");
	return 0;
}