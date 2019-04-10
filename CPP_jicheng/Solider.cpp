#include "Solider.h"
#include<iostream>
using namespace std;

Solider::Solider(){
	m_strName = "Jim";
	cout << "Solider()" << endl;
}

Solider::~Solider(){
	cout << "~Solider()" << endl;
}

void Solider::play() {
	cout << "play()" << endl;
}

void Solider::play(int x) {
	cout << "solider name " << m_strName <<"set Person_02::m_strName = Merry "<< endl;
	Person_02::m_strName = "Merry";
	cout << "play(int x)" << endl;
}


