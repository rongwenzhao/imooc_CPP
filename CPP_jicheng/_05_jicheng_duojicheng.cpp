#include<iostream>
#include<stdlib.h>
#include"MigrantWorker_01.h"

using namespace std;

/*
��̳�
	Ҫ��
		1��Farmer_01��ũ���࣬���ݣ�m_strName�����������죬������sow(),����,
		2��Worker_01�������࣬���ݣ�m_strCode�����������죬������carry()�����ˣ�
		3��MigrantWorker_01��ũ���࣬���ݣ��ޣ����������죬����
*/

int main_eee() {

	MigrantWorker_01 mw("hello","003","black");
	mw.sow();
	mw.carry();


	system("pause");
	return 0;
}