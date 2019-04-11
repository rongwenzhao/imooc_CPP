#include<iostream>
#include<stdlib.h>
#include"MigrantWorker_01.h"

using namespace std;

/*
多继承
	要求：
		1、Farmer_01，农民类，数据：m_strName，函数：构造，析构，sow(),播种,
		2、Worker_01，工人类，数据：m_strCode，函数：构造，析构，carry()，搬运，
		3、MigrantWorker_01，农民工类，数据，无，函数，构造，析构
*/

int main_eee() {

	MigrantWorker_01 mw("hello","003","black");
	mw.sow();
	mw.carry();


	system("pause");
	return 0;
}