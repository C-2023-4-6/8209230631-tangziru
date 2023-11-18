#include<iostream>
using namespace std;

int main()
{
	int k = 1;//原代码未定义k
	int i = k +1;
	cout << i++ << endl;//原代码输出前未给i赋初值
	cout << "Welcome to C++" << endl;
	return 0;



}

