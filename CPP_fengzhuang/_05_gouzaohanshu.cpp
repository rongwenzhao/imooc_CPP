/**
实例化的对象是如何在内存中存储的？
类中的数据和代码又是如何存储的？
代码和这些数据又有怎样的一些关系呢？

介绍下对象的结构。

先介绍内存被按照用途划分成的5个区域：

1、栈区： int x = 0; int *p = NULL;    //我们平常定义一个变量的时候就使用了栈区。
										 栈区特点就是，内存的分配和回收都是由系统来维护，不用程序员来关心。

2、堆区： int *p = new int[20];		   //程序员使用new来定义变量时，该变量被存储在堆区，后面需要delete来释放该内存。
									     显而易见，堆区内存由用户来申请和释放。

3、全局区： 存储全局变量及静态变量     //这个我们会在后面的课程中见到。


4、常量区： string str = "hello";      //存储一些字符串和常量。


5、代码区： 存储逻辑代码的二进制       //代码区，存储编译之后的二进制代码。

*/

//后面引出对象的数据初始化，随机引出构造函数，有且仅有一次的初始化。

#include"Teacher.h"
#include<stdlib.h>
#include<iostream>
using namespace std;

/**
	构造函数的使用
	定义Teacher类的无参构造函数和有参构造函数，并demo展示。

	不需要传递参数的构造函数，称为默认构造函数。
*/

int main_eee() {
	
	Teacher t1;
	Teacher t2("Merry","女",18);
	Teacher t3("James","男");//在有参构造的声名处有给默认值，此处可以。
							 //注意，利用C++语法设置默认值要保证不会有冲突，否则编译不会通过。
							 //也就是，默认值不能乱给,因为有默认值，就可以省略不给值。

	cout << t1.getName() << " " << t1.getGender() << " " << t1.getAge() << endl;
	cout << t2.getName() << " " << t2.getGender() << " " << t2.getAge() << endl;
	cout << t3.getName() << " " << t3.getGender() << " " << t3.getAge() << endl;

	system("pause");
	return 0;
}