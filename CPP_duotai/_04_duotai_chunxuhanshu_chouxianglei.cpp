#include<iostream>
#include<stdlib.h>
#include"Person.h"
#include"Worker.h"
#include"Dustman.h"


using namespace std;

/*
		���麯����
			ֻ�к���������virtual void func() = 0;
			����ʽ��Ϊ���麯����
			��Ȼ�����麯��Ҳ����Ϊĳ����ĳ�Ա������
			�ڸ�����麯�����У����麯����ָ���ֵΪ0����û���麯����Ϊָ��

		�����ࣺ

			���д��麯�������Ϊ�����ࡣ
			�������ǲ�����ʵ��������ġ������ó�����Ķ�����ô��麯�����Ǵ���ģ����Բ�����ʵ�������󡣣�
*/

/*
	���麯�������� ��ĿҪ��
	1��Person�࣬��Ա���������캯�������������������麯��work�����ݳ�Ա������m_strName
	2��Worker�࣬��Ա���������캯����work�����ݳ�Ա������m_iAge��
	3��Dustman�ࣨ��๤�ࣩ����Ա���������캯����work��
*/


int main_ddd() {

	//Person p;
	//Worker w("ll",23);
	Dustman dustman("zhangsan",23);

	system("pause");
	return 0;
}