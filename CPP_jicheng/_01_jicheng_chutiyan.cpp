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


/*
	ע�⣺B���A��̳У�B����A����������ݳ�Ա��ֻ����Щ�з���Ȩ�ޣ���Щ�޷���Ȩ�ޡ�
*/

int main() {

	Worker* worker = new Worker();
	//worker->m_iAge = 10;
	worker->m_iSalary = 1000;
	//worker->eat();
	worker->work();
	//cout<<worker->m_iAge<<" "<<worker->m_iSalary<<endl;


	int a = 10;
	string abc = "abcedgdsdhsfjgshs";
	cout<<"sizeof(int)"<<sizeof(a)<<" "<<"sizeof(string) "<<sizeof(abc)<<endl;

	cout << "sizeof(*worker)" << sizeof(*worker) << endl;
	delete worker;
	worker = NULL;
	
	system("pause");
	return 0;
}