#include<iostream>
#include<stdlib.h>
#include"Solider_03.h"
#include"Person_03.h"

using namespace std;

/*
	is_a�����ʵ��������ı���������Ķ���ָ�롢���ó�ʼ���������
*/

/*
	Person_03
	Solider_03 

*/

int main() {

	/*
	
	//Person_03 person = solider;��ߴ��룬���Ƹ�ֵ���������������������ø���ĸ��ƹ��캯����ͬʱ�������ֵ����ֵ������ı�����
		//����������ֵ������Ķ���ֵΪ��������ݡ�
		Solider_03 solider;
		Person_03 person;
		person = solider;

		person.paly();
	*/

	/*
	//ֵΪ����
		Solider_03 solider;
		Person_03 *person = &solider;//��ʱ��û�������µĶ���
	
		person->paly();
	*/

	Person_03* p = new Solider_03();
	p->paly();

	delete p;//delete pʱ��ֻ�����˸����������������û�е��������������������ʱ�ͻᵼ���ڴ�й©
	//��ʱ����δ����أ����ǿ��Խ�Person_03��������������Ϊvirtual���������������

	//ʲôʱ����Ҫ�����������أ�������ʹ�ø���ָ��ָ������������ͬʱ��������ʹ�ø�ָ�����ͷ�����ڴ棬
	//���Ǿ���Ҫʹ������������
	//д���ܼ򵥣�ֻ������������ǰ�����virtual�ؼ��־Ϳ����ˡ�
	//���ң����virtual�ؼ���Ҳ�ǿ��Լ̳���ȥ�ģ�������ʹ���ǲ���Person_03������Solider_03��������ʾ���������������
	//~Solider_03();������������Ҳ����ġ�

	p = NULL;

	system("pause");
	return 0;
}




