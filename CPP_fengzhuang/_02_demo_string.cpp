/**
string���÷�

��Ŀ������
	1����ʾ�û�����������
	2�������û������룻
	3��Ȼ�����û��ʺã� hell xxx��
	4�������û����ֵĳ��ȣ�
	5�������û����ֵ�����ĸ��ʲô��
	6������û�ֱ������س�����ô�����û�������Ϊ�գ�
	7������û������������imooc����ô�����û��Ľ�ɫ��һ������Ա
*/

#include<iostream>
#include<string>
using namespace std;

int main_bbb() {
	string name;
	cout << "please enter your name" << endl;
	//ע�⣬����Ĳ����Ǵ���ģ�����������ʾ�� "+" �����������ָ�롣
	//cout << "hello" + "world" << endl;

	//��ΪҪ�ж������Ƿ�Ϊ�գ�������getline��������ȡ�û����뵽�ַ�������name�С�
	getline(cin, name);
	if (name.empty()) {
		cout << "your input is null" << endl;
		return -1;
	}

	if (name == "imooc") {
		cout << "you are a administrator" << endl;
	}
	cout << "hello " + name << endl;
	cout << "name length " << name.size() << endl;
	cout << "your first letter " << name[0] << endl;
	return 0;
}

