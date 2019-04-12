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
	声明Shape类中的calcArea()函数为virtual，即虚函数，这样在Shape，Circle，Rect基础上就说明了多态的问题：

	即，多态是在封装，继承的基础上，调用不同子类的相同方法会有不同的执行逻辑。
	C++使用virtual关键字实现的。
*/

int main() {

	Shape* shape1 = new Rect(4, 6);
	Shape* shape2 = new Circle(5);


	shape1->calcArea();
	shape2->calcArea();

	delete shape1;
	shape1 = NULL;

	delete shape2;
	shape2 = NULL;


	system("pause");
	return 0;
}