#include<iostream>
#include<stdlib.h>
#include"MigrantWorker_01.h"
#include"Farmer_01.h"
#include"Worker_01.h"

using namespace std;

/*
��̳У�������μ̳ж����ͬ�������ʵ�������⡣��
	
	Ҫ��
		1��Farmer_01��ũ���࣬���ݣ�m_strName�����������죬������sow(),����,
		2��Worker_01�������࣬���ݣ�m_strCode�����������죬������carry()�����ˣ�
		3��MigrantWorker_01��ũ���࣬���ݣ��ޣ����������죬����
		4��Person_01�࣬���ݣ�m_strColor�����������죬������printColor()
*/

int main() {

	MigrantWorker_01 mw("James","020","yellow");
	mw.carry();
	mw.Farmer_01::printColor();
	mw.Worker_01::printColor();
	
	//��ʱ���Է��ִ�ӡ���£�
	/*
									Person_01()
									Farmer_01()
									Person_01()
									Worker_01()
									MigrantWorker_01()
									020
									Worker_01 carry()
									 m_strColor: Farmer yellow
									Person_01 printColor()
									 m_strColor: Worker yellow
									Person_01 printColor()
									�밴���������. . .
									~MigrantWorker_01()
									~Worker_01()
									~Person_01()
									~Farmer_01()
									~Person_01()	
	*/
	//���Է��֣�MigrantWorker_01����������Person_01��Ķ��󣬹������Σ���ӡcolorʱ���зֱ�ͨ��Farmer��Worker�ഫ���colorֵ��
	//Ϊ�˽��������⣬����ʹ����̳У����ڼ̳з�ʽǰ�����virtual�ؼ��֣�ʹ��Worker��Farmer��Ϊ����ࡣ��ʱ��ӡ���£�

	mw.printColor();

	/*
									Person_01()
									Farmer_01()
									Worker_01()
									MigrantWorker_01()
									020
									Worker_01 carry()
									 m_strColor: blue
									Person_01 printColor()
									 m_strColor: blue
									Person_01 printColor()
									 m_strColor: blue
									Person_01 printColor()
									�밴���������. . .
									~MigrantWorker_01()
									~Worker_01()
									~Farmer_01()
									~Person_01()
	*/

	//��̳еĺô�������ʹ��ũ���������ֻ��һ��Person�����ݣ�����Ĵ�ӡ�Ѿ�˵���ˡ�
	//��ӡ��ֻ��blue��˵������Ϊ���μ̳����ĸ��࣬��û�н��в����Ĵ��ݣ�Ҳ����˵������ֻʹ���˶��㸸���Ĭ�ϲ�����
	//���޷��������л�ô���Ĳ�����

	
	
	system("pause");
	return 0;
}