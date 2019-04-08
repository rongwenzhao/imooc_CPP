#include "Array.h"
#include <iostream>
using namespace std;

Array::Array(int count){
	cout<<"Array()"<<endl;
	m_iCount = count;
	m_pArr = new int[m_iCount];
	if (m_pArr == NULL) {
		//fail
		//do something
	}
	//init array's item
	for (int i = 0; i < m_iCount; i++){
		m_pArr[i] = i;
	}
}

Array::Array(const Array& arr) {
	cout << "Array(const Array& arr)" << endl;
	m_iCount = arr.m_iCount;
	m_pArr = new int[m_iCount];
	for (int i = 0; i < m_iCount; i++){
		m_pArr[i] = arr.m_pArr[i];
	}
}

Array::~Array(){
	cout << "~Array() and m_pArr = " << m_pArr << endl;
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
	cout << "m_pArr : " << m_pArr << endl;
}

void Array::printArr() {
	cout << "array item info " << endl;
	for ( int i = 0; i < m_iCount; i++) {
		cout << m_pArr[i] << endl;
	}
}