#include<iostream>
#include"student.h"
using namespace std;

Student::Student()// Ĭ�Ϲ��캯����ʵ��
{
	num = 0;
	name[0] = '\0';
	sex = '\0';
}

void Student::set_value(int nu,const char* nm, char s)// ��ֵ������ʵ��
{
	num = nu;
	int i = 0;
	while (nm[i] != '\0') // ѭ�������ַ�
	{
		name[i] = nm[i];
		i++;
	}
	name[i] = '\0'; // ��� null ��ֹ��
	sex = s;
}

void Student::display()//����ʵ��
{
	cout << "num:"  << num << endl;
	cout << "name: " << name << endl;
	cout << "sex: " << sex << endl;
}