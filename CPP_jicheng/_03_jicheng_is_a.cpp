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

void test1(Person_03 p) {
	p.paly();
} 

void test2(Person_03& p) {
	p.paly();
} 

void test3(Person_03* p) {
	p->paly();
}

int main_ccc() {

	/*
	//ʵ��һ
	//Person_03 person = solider;��ߴ��룬���Ƹ�ֵ���������������������ø���ĸ��ƹ��캯����ͬʱ�������ֵ����ֵ������ı�����
		//����������ֵ������Ķ���ֵΪ��������ݡ�
		Solider_03 solider;
		Person_03 person;
		person = solider;

		person.paly();
	*/

	/*
	//ʵ���
	//ֵΪ����
		Solider_03 solider;
		Person_03 *person = &solider;//��ʱ��û�������µĶ���
	
		person->paly();
	*/

	/*
	//ʵ����
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
	*/


	//ʵ����
	//���庯�� test1(Person_03 p) test2(Person_03 &p) test2(Person_03 *p)���������࣬�������
	Person_03 person;
	Solider_03 solider;

	//test1(person);
	//test1(solider);
	/*	����test1ʱ��Ľ��
				Person_03()
				Person_03()
				Solider_03()
				Person_03::paly()
				Person_03::m_strName Jim
				~person_03()
				Person_03::paly()
				Person_03::m_strName Merry
				~person_03()
				�밴���������. . .
				~Solider_03()
				~person_03()
				~person_03()
	*/
	//test2(person);
	//test2(solider);
	/* ����test2��Ч����
				Person_03()
				Person_03()
				Solider_03()
				Person_03::paly()
				Person_03::m_strName Jim
				Person_03::paly()
				Person_03::m_strName Merry
				�밴���������. . .
				~Solider_03()
				~person_03()
				~person_03()
	*/

	test3(&person);
	test3(&solider);
	/*
	��test2���ý��һ����
	*/

	system("pause");
	return 0;
}




