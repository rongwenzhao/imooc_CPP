#include<iostream>
#include<stdlib.h>
#include"Solider.h"
#include"Person_02.h"
using namespace std;


/*
	隐藏
		1、子类调用父类的同名数据成员
		2、子类与父类方法同名，无论参数是否一致，都是隐藏，构不成重载关系

		下面的代码主要演示了上面的知识点。

		类Person_02
		类Solider
*/

int main_bbb() {

	Solider solider;
	solider.Person_02::eat();

	solider.play();
	solider.play(5);

	solider.Person_02::play();
	solider.Person_02::play(4);
	solider.Person_02::eat();

	system("pause");
	return 0;
}