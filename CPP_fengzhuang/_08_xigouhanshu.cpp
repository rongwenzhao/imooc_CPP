/**
	��������

�ͷ���Դ��
*/



/**
	��Ŀ
Teacher_02��
Ҫ��
	1���Զ�����������
	2����ͨ��ʽʵ�����Ķ��������ٶ���ʱ�Ƿ��Զ�������������
	3��ͨ���������캯��ʵ�������������ٶ���ʱ�Ƿ������������
*/

#include"Teacher_02.h"
#include<stdlib.h>

void test(Teacher_02 t) {

}

int main() {

	Teacher_02 t1;
	Teacher_02 t2(t1);
	//�ڶ������ɲ��ͷš�
	Teacher_02 *p = new Teacher_02();
	delete p;

	test(t1);
	system("pause");
	return 0;
}