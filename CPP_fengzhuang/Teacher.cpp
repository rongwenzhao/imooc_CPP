#include "Teacher.h"
#include<iostream>

Teacher::Teacher() {
	m_strName = "Jim";
	m_strGender = "��";
	m_iAge = 18;
	cout << "Teacher()" << endl;
}

Teacher::Teacher(string name, string gender, int age) {
	m_strName = name;
	m_strGender = gender;
	m_iAge = age;
	cout << "Teacher(string name, string gender, int age)" << endl;
}

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
	cout << " ��ʼ�Ͽ�........ " << endl;
}