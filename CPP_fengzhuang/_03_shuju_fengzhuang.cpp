#include<iostream>
#include<string>
using namespace std;

/**
	���ݵķ�װ
����һ��Student�࣬����������Ϣ��
	1��������name
	2���Ա�gender
	3��ѧ�֣�ֻ������score
	4��������ѧϰ��study*/

class Student{
	//ע�⣬����һ�㽫public���͵ĳ�Աд���ඨ���ǰ�棬��private���͵ĳ�Աд���ඨ��ĺ��档
	//��Ϊ������ʹ�����ʱ��֮���ע���ṩ�����Ĺ��нӿڣ�������ȥ��ע˽�г�Ա��
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

	//��ʼ��ѧ�֣��������캯�������ڹ��캯���г�ʼ��
	void initScore() {
		m_iScore = 0;
	}

	//ѧϰ����������ѧ��
	void study(int _score) {
		m_iScore += _score;
	}

	//ע���Ա�����������淶
private:
	string m_strName;
	string m_strGender;
	int m_iScore;
};

int main_ccc() {
	Student stu;
	stu.initScore();
	stu.setName("zhangsan");
	stu.setGender("��&Ů");
	stu.study(3);
	stu.study(5);
	stu.study(6);

	cout << "student info: " << stu.getName() << " " << stu.getGender() << " " << stu.getScore() << endl;

	Student *student;
	student = new Student();
	student->setName("lisi");
	student->setGender("Ů");
	student->initScore();
	student->study(2);

	cout << "student info: " << student->getName() << " " << student->getGender() << " " << student->getScore() << endl;

	delete student;
	student = NULL;

	return 0;
}
