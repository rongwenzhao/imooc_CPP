#include<iostream>
#include<stdlib.h>
#include<string>
#include"Teacher.h"
using namespace std;

/**
	���ڶ�������ⶨ��
	���ڶ���ĳ�Ա������Ĭ����inline��
*/

/**
��ĿҪ��

����һ��Teacher�࣬Ҫ��ֱ����ͬ�ļ����ⶨ��ͷ��ļ����ⶨ��ķ�ʽ��ɣ�����Ҫ�����£�
���ݳ�Ա��
		����
		����
		�Ա�
��Ա������
		���ݳ�Ա�ķ�װ����
		�ڿ�teach
*/
/*

class Teacher{
public:
	void setName(string _name);
	string getName();
	void setGender(string _gender);
	string getGender();
	void setAge(int _age);
	int getAge();
	void teach();

private:
	string m_strName;
	string m_strGender;
	int m_iAge;
};

void Teacher::setName(string _name) {
	m_strName = _name;
}

string Teacher::getName() {
	return m_strName;
}

void Teacher::setGender(string _gender) {
	m_strGender = _gender;
}

string Teacher::getGender() {
	return m_strGender;
}

void Teacher::setAge(int _age) {
	m_iAge = _age;
}

int Teacher::getAge() {
	return m_iAge;
}

void Teacher::teach() {
	cout<<" ��ʼ�Ͽ�........ "<<endl;
}

*/


int main_ddd() {
	
	Teacher t;
	t.setName("����");
	t.setGender("��");
	t.setAge(30);

	cout << t.getName() << " " << t.getGender() << " " << t.getAge() << endl;
	t.teach();

	system("pause");
	return 0;
}