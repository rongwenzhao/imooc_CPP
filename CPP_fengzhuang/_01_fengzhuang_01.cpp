/**
��Ķ����ʹ��
*/
#include <iostream>
using namespace std;
class Coordinator{
public:
	int x;
	int y;
	void printX() {
		cout << "X =  " << x << endl;
	}

	void printY() {
		cout << "Y = " << y << endl;
	}
};

int main_aaa() {

	//����new����ջ�϶������
	Coordinator coor;
	coor.x = 10;
	coor.y = 20;
	coor.printX();
	coor.printY();

	//��new�ڶ������ɶ���ע�⣬Ҫ��delete���ʹ��
	Coordinator* p = new Coordinator();
	if (NULL == p) {
		//failed
		return 0;
	}

	p->x = 200;
	p->y = 400;
	p->printX();
	p->printY();
	delete p;
	p = NULL;

}
