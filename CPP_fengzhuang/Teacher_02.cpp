#include "Teacher_02.h"

Teacher_02::Teacher_02(string name, int age, int max) :m_strName(name), m_iAge(age), m_iMax(max) {
	cout<<"Teacher_02(string name, int age, int max)"<<endl;
}

Teacher_02::Teacher_02(const Teacher_02& teacher) :m_iMax(teacher.m_iMax){
	cout << "Teacher_02(const Teacher_02& teacher)" << endl;
	m_strName = teacher.m_strName;
	m_iAge = teacher.m_iAge;
}

Teacher_02::~Teacher_02() {
	cout << "~Teacher_02()" << endl;
}

void Teacher_02::setName(string _name) {
	m_strName = _name;
}

string Teacher_02::getName() {
	return m_strName;
}

void Teacher_02::setAge(int _age) {
	m_iAge = _age;
}

int Teacher_02::getAge() {
	return m_iAge;
}

int Teacher_02::getMax() {
	return m_iMax;
}

