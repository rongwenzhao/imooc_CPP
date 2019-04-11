#include "MigrantWorker_01.h"
#include<iostream>

MigrantWorker_01::MigrantWorker_01(string name, string code):Worker_01(code),Farmer_01(name){
	cout<<"MigrantWorker_01()"<<endl;
}

MigrantWorker_01::~MigrantWorker_01(){
	cout << "~MigrantWorker_01()" << endl;
}
