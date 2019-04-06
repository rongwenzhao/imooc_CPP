/**
类的定义和使用
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

	//不用new，在栈上定义对象
	Coordinator coor;
	coor.x = 10;
	coor.y = 20;
	coor.printX();
	coor.printY();

	//用new在堆上生成对象。注意，要和delete配对使用
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
