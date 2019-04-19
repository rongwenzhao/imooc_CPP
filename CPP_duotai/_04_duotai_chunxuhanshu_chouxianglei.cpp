#include<iostream>
#include<stdlib.h>

using namespace std;

/*
		纯虚函数：
			只有函数声明，virtual void func() = 0;
			此形式即为纯虚函数。
			在该类的虚函数表中，该虚函数的指针的值为0，即没有虚函数作为指向。

		抽象类：

			含有纯虚函数的类称为抽象类。
			抽象类是不允许实例化对象的。（你用抽象类的对象调用纯虚函数，是错误的，所以不允许实例化对象。）
*/




int main() {



	system("pause");
	return 0;
}