#include<iostream>
#include"student.h"
using namespace std;

Student::Student()// 默认构造函数的实现
{
	num = 0;
	name[0] = '\0';
	sex = '\0';
}

void Student::set_value(int nu,const char* nm, char s)// 赋值函数的实现
{
	num = nu;
	int i = 0;
	while (nm[i] != '\0') // 循环复制字符
	{
		name[i] = nm[i];
		i++;
	}
	name[i] = '\0'; // 添加 null 终止符
	sex = s;
}

void Student::display()//函数实现
{
	cout << "num:"  << num << endl;
	cout << "name: " << name << endl;
	cout << "sex: " << sex << endl;
}