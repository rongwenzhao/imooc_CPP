#include "Array.h"
#include <iostream>
using namespace std;

Array::Array(int count){
	cout<<"Array()"<<endl;
	m_iCount = count;
	m_pArr = new int[m_iCount];
	if (m_pArr == NULL) {
		//内存分配失败时
		//do something
	}
}

Array::Array(const Array& arr) {
	cout << "Array(const Array& arr)" << endl;
	m_iCount = arr.m_iCount;
	m_pArr = arr.m_pArr;
}

Array::~Array(){
	cout << "~Array()" << endl;
	delete m_pArr;
	m_pArr = NULL;
}

void Array::setCount(int count) {
	m_iCount = count;
}

int Array::getCount() {
	return m_iCount;
}

void Array::printAddr() {
	cout << "m_pArr的值是: " << m_pArr << endl;
}