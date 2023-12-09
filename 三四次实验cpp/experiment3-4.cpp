#include<iostream>
#include"mytriangle.h"//头文件
using namespace std;

int main()
{
	double a, b, c;
	cout << "请输入三角形的三条边：" ;
	cin >> a >> b >> c;
	if (is_valid(a,b,c))
	{
		double s = _area(a, b, c);
		cout << "三角形面积为： " << s << endl;
	}
	else
	{
		cout << "无法构成三角形" << endl;
	}

	return 0;
}