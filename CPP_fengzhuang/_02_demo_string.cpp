/**
string的用法

题目描述：
	1、提示用户输入姓名；
	2、接收用户的输入；
	3、然后向用户问好， hell xxx；
	4、告诉用户名字的长度；
	5、告诉用户名字的首字母是什么；
	6、如果用户直接输入回车，那么告诉用户的输入为空；
	7、如果用户输入的名字是imooc，那么告诉用户的角色是一个管理员
*/

#include<iostream>
#include<string>
using namespace std;

int main_bbb() {
	string name;
	cout << "please enter your name" << endl;
	//注意，下面的操作是错误的，编译器会提示： "+" 不能添加两个指针。
	//cout << "hello" + "world" << endl;

	//因为要判断输入是否为空，所以用getline函数，获取用户输入到字符串变量name中。
	getline(cin, name);
	if (name.empty()) {
		cout << "your input is null" << endl;
		return -1;
	}

	if (name == "imooc") {
		cout << "you are a administrator" << endl;
	}
	cout << "hello " + name << endl;
	cout << "name length " << name.size() << endl;
	cout << "your first letter " << name[0] << endl;
	return 0;
}

