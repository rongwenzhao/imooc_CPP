#include<iostream>
#include<stdlib.h>
#include"Solider_03.h"
#include"Person_03.h"

using namespace std;

/*
	is_a的相关实例：父类的变量被子类的对象、指针、引用初始化的情况。
*/

/*
	Person_03
	Solider_03 

*/

void test1(Person_03 p) {
	p.paly();
} 

void test2(Person_03& p) {
	p.paly();
} 

void test3(Person_03* p) {
	p->paly();
}

int main_ccc() {

	/*
	//实验一
	//Person_03 person = solider;左边代码，复制赋值子类对象给父类变量，会调用父类的复制构造函数，同时用子类的值来赋值给父类的变量。
		//用子类来赋值给父类的对象，值为子类的内容。
		Solider_03 solider;
		Person_03 person;
		person = solider;

		person.paly();
	*/

	/*
	//实验二
	//值为子类
		Solider_03 solider;
		Person_03 *person = &solider;//此时并没有生成新的对象
	
		person->paly();
	*/

	/*
	//实验三
			Person_03* p = new Solider_03();
			p->paly();

			delete p;//delete p时，只析构了父类的析构函数，并没有调用子类的析构函数，此时就会导致内存泄漏
			//此时该如何处理呢，我们可以将Person_03的析构函数声明为virtual，即虚的析构函数

			//什么时候需要虚析构函数呢，当我们使用父类指针指向堆中子类对象，同时我们又想使用该指针来释放这块内存，
			//这是就需要使用虚析构函数
			//写法很简单，只需在析构函数前面加上virtual关键字就可以了。
			//而且，这个virtual关键字也是可以继承下去的，即，即使我们不在Person_03的子类Solider_03的类中显示定义虚的析构函数
			//~Solider_03();，该析构函数也是虚的。

			p = NULL;
	*/


	//实验四
	//定义函数 test1(Person_03 p) test2(Person_03 &p) test2(Person_03 *p)并传入子类，父类变量
	Person_03 person;
	Solider_03 solider;

	//test1(person);
	//test1(solider);
	/*	调用test1时候的结果
				Person_03()
				Person_03()
				Solider_03()
				Person_03::paly()
				Person_03::m_strName Jim
				~person_03()
				Person_03::paly()
				Person_03::m_strName Merry
				~person_03()
				请按任意键继续. . .
				~Solider_03()
				~person_03()
				~person_03()
	*/
	//test2(person);
	//test2(solider);
	/* 调用test2的效果：
				Person_03()
				Person_03()
				Solider_03()
				Person_03::paly()
				Person_03::m_strName Jim
				Person_03::paly()
				Person_03::m_strName Merry
				请按任意键继续. . .
				~Solider_03()
				~person_03()
				~person_03()
	*/

	test3(&person);
	test3(&solider);
	/*
	与test2调用结果一样。
	*/

	system("pause");
	return 0;
}




