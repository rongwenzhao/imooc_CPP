#include<iostream>
#include<stdlib.h>
#include"Worker.h"
using namespace std;

/*
	�̳�
		Ҫ��
			1������Person�࣬Ҫ����m_strName��m_iAge�������ݳ�Ա�����������������eat����
			2������Worker�࣬Ҫ���м̳�Person�࣬�������ݳ�Ա_iSalary�����졢������work����

*/

int main() {

	Worker* worker = new Worker();
	worker->m_iAge = 10;
	worker->m_iSalary = 1000;
	worker->eat();
	worker->work();
	cout<<worker->m_iAge<<" "<<worker->m_iSalary<<endl;

	delete worker;
	worker = NULL;
	
	system("pause");
	return 0;
}