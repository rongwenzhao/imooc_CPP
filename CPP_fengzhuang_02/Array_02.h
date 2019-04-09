#pragma once
class Array_02{
public:
	Array_02(int len);
	~Array_02();
	void setLen(int len);
	int getLen();
	Array_02& printInfo();
	void test(int a,int b,int c,int d,int e);
private:
	int len;
};

