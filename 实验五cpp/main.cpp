#include<iostream>
#include"student.h"
using namespace std;

int main()
{
	Student stud1;//定义对象

	stud1.set_value(007,"tcg",'m');
	stud1.display();

	return 0;
}