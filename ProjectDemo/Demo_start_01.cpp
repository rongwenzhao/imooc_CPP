/*

知识点：bool类型 命名空间 输入输出
题目要求：
	使用一个函数，找出一个整型数组中的最大值或最小值
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
	cout << "输入取最大值还是最小值" << endl;
	cin >> isMax;
	cout << CompanyOne::getMaxOrMin(arr, 5, isMax) << endl;
	return 0;
}
