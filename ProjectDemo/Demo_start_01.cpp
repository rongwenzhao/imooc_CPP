/*

֪ʶ�㣺bool���� �����ռ� �������
��ĿҪ��
	ʹ��һ���������ҳ�һ�����������е����ֵ����Сֵ
*/

#include<iostream>
using namespace std;
namespace CompanyOne {
	int getMaxOrMin(int* arr, int count, bool isMax) {
		int temp = arr[0];
		for (int i = 1; i < count; i++) {
			if (isMax) {
				if (arr[i] > temp) {
					temp = arr[i];
				}
			}
			else {
				if (arr[i] < temp) {
					temp = arr[i];
				}
			}
		}
		return temp;
	}
}

int main(void) {
	int arr[5] = {100,200,20,99,88};
	bool isMax = false;
	cout << "����ȡ���ֵ������Сֵ" << endl;
	cin >> isMax;
	cout << CompanyOne::getMaxOrMin(arr, 5, isMax) << endl;
	return 0;
}
