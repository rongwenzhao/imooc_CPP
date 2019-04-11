#include<iostream>
#include<stdlib.h>
#include"MigrantWorker_01.h"
#include"Farmer_01.h"
#include"Worker_01.h"

using namespace std;

/*
虚继承（解决菱形继承多个相同顶层类的实例的问题。）
	
	要求：
		1、Farmer_01，农民类，数据：m_strName，函数：构造，析构，sow(),播种,
		2、Worker_01，工人类，数据：m_strCode，函数：构造，析构，carry()，搬运，
		3、MigrantWorker_01，农民工类，数据，无，函数，构造，析构
		4、Person_01类，数据：m_strColor，函数，构造，析构，printColor()
*/

int main() {

	MigrantWorker_01 mw("James","020","yellow");
	mw.carry();
	mw.Farmer_01::printColor();
	mw.Worker_01::printColor();
	
	//此时可以发现打印如下：
	/*
									Person_01()
									Farmer_01()
									Person_01()
									Worker_01()
									MigrantWorker_01()
									020
									Worker_01 carry()
									 m_strColor: Farmer yellow
									Person_01 printColor()
									 m_strColor: Worker yellow
									Person_01 printColor()
									请按任意键继续. . .
									~MigrantWorker_01()
									~Worker_01()
									~Person_01()
									~Farmer_01()
									~Person_01()	
	*/
	//可以发现，MigrantWorker_01类中有两份Person_01类的对象，构造两次，打印color时，有分别通过Farmer和Worker类传入的color值。
	//为了解决这个问题，可以使用虚继承，即在继承方式前面加上virtual关键字，使得Worker和Farmer成为虚基类。此时打印如下：

	mw.printColor();

	/*
									Person_01()
									Farmer_01()
									Worker_01()
									MigrantWorker_01()
									020
									Worker_01 carry()
									 m_strColor: blue
									Person_01 printColor()
									 m_strColor: blue
									Person_01 printColor()
									 m_strColor: blue
									Person_01 printColor()
									请按任意键继续. . .
									~MigrantWorker_01()
									~Worker_01()
									~Farmer_01()
									~Person_01()
	*/

	//虚继承的好处，就是使得农民工这个类中只有一份Person的数据，上面的打印已经说明了。
	//打印中只有blue，说明，作为菱形继承最顶层的父类，并没有进行参数的传递，也就是说，参数只使用了顶层父类的默认参数，
	//而无法从子类中获得传入的参数。

	
	
	system("pause");
	return 0;
}