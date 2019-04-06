#include<string>
#include<iostream>
using namespace std;
class Teacher_02{
public:
	Teacher_02(string name="Jim", int age=1, int max=100);
	//拷贝构造函数部分
	Teacher_02(const Teacher_02& teacher);
	~Teacher_02();
	void setName(string _name);
	string getName();
	void setAge(int _age);
	int getAge();
	int getMax();

private:
	string m_strName;
	int m_iAge;
	const int m_iMax;
};

