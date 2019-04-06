/*
构造函数的初始化列表

class Student{

public:
	Student():m_strName("Jim"),m_Age(16){}
private:
	string m_strName;
	int m_iAge;
};

注意1：上面代码中，Student():m_strName("Jim"),m_Age(16){}行的:m_strName("Jim"),m_Age(16)代码即为属性的初始化列表。

注意2：初始化列表的特性，防止使用时出现不必要的错误：
	1、初始化列表先于构造函数执行。
	这就说明，编译器会先给初始化列表的数据成员赋值，再执行构造函数当中的代码。

	2、初始化列表只能用于构造函数。
	在其他函数的后面使用初始化列表，将会导致语法错误。

	3、初始化列表可以同时初始化多个数据成员。
	并且速度高，效率快，我们在此推荐使用初始化列表的方式来对数据成员进行初始化。

注意3：初始化列表的必要性
	既然构造函数可以初始化成员变量，C++为什么还大费周章的搞个初始化列表出来呢，它是不是完全是不是必要的，可有可无的？
	答案是否定的。看下面的一个例子。

	class Circle{
		
		public:
			Circle():m_dPi(3.14){}
		private:
			const double m_dPi;
	};

	上面代码，我们需要一个圆的类，且需要Pi这个变量，就不可以在构造函数体内进行赋值，因为const修饰的，不可以修改其值，
	但可以在初始化列表中对其进行赋值操作。

*/


/*
							题目
定义Teacher_02 类，要求

1、自定义有参默认构造函数；
2、使用初始化列表初始化数据。

数据：
	名字
	年龄
成员函数：
	数据成员的封装函数

拓展：
	定义可以带最多学生的个数，此为常量

*/

#include"Teacher_02.h"
#include<stdlib.h>

int main_fff() {
	
	//注意哈，类中有const的数据成员时，该const数据成员的初始化必须放到初始化数据列表中进行初始化。
	Teacher_02 t1;
	Teacher_02 t2("Lili",23,102);

	cout<<t1.getName()<<" "<<t1.getAge() << " " << t1.getMax() << endl;
	cout << t2.getName() << " " << t2.getAge() <<" "<<t2.getMax()<<endl;
	system("pause");
	return 0;
}