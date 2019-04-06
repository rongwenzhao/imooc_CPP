#include<iostream>
#include<string>
using namespace std;

/**
	数据的封装
定义一个Student类，含有如下信息：
	1、姓名：name
	2、性别：gender
	3、学分（只读）：score
	4、方法，学习：study*/

class Student{
	//注意，我们一般将public类型的成员写在类定义的前面，将private类型的成员写在类定义的后面。
	//因为我们在使用类的时候，之后关注类提供出来的共有接口，而不会去关注私有成员。
public:
	void setName(string _name) {
		m_strName = _name;
	}

	string getName() {
		return m_strName;
	}

	void setGender(string _gender) {
		m_strGender = _gender;
	}

	string getGender() {
		return m_strGender;
	}

	int getScore() {
		return m_iScore;
	}

	//初始化学分，讲到构造函数，会在构造函数中初始化
	void initScore() {
		m_iScore = 0;
	}

	//学习方法，增加学分
	void study(int _score) {
		m_iScore += _score;
	}

	//注意成员变量的命名规范
private:
	string m_strName;
	string m_strGender;
	int m_iScore;
};

int main_ccc() {
	Student stu;
	stu.initScore();
	stu.setName("zhangsan");
	stu.setGender("男&女");
	stu.study(3);
	stu.study(5);
	stu.study(6);

	cout << "student info: " << stu.getName() << " " << stu.getGender() << " " << stu.getScore() << endl;

	Student *student;
	student = new Student();
	student->setName("lisi");
	student->setGender("女");
	student->initScore();
	student->study(2);

	cout << "student info: " << student->getName() << " " << student->getGender() << " " << student->getScore() << endl;

	delete student;
	student = NULL;

	return 0;
}
