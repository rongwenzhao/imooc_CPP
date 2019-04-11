#include "MigrantWorker_01.h"
#include<iostream>

MigrantWorker_01::MigrantWorker_01(string name, string code,string color):Worker_01(code,color),Farmer_01(name,color){
	cout<<"MigrantWorker_01()"<<endl;
}

MigrantWorker_01::~MigrantWorker_01(){
	cout << "~MigrantWorker_01()" << endl;
}
