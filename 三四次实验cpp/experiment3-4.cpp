#include<iostream>
#include"mytriangle.h"//ͷ�ļ�
using namespace std;

int main()
{
	double a, b, c;
	cout << "�����������ε������ߣ�" ;
	cin >> a >> b >> c;
	if (is_valid(a,b,c))
	{
		double s = _area(a, b, c);
		cout << "���������Ϊ�� " << s << endl;
	}
	else
	{
		cout << "�޷�����������" << endl;
	}

	return 0;
}