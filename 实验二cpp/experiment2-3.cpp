#include<iostream>
using namespace std;

int main()
{
	double a, b, c,l;//定义a,b,c三条边长以及周长l
	cout << "请输入三角形的三条边长：" ;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)//判断是否构成三角形
	{
		l = a + b + c;
		cout << "三角形周长为：" <<l<< endl;
		if (a == b || b == c || a == c)
		{
			cout << "该三角形为等腰三角形" << endl;
		}
		else { cout << "该三角形不为等腰三角形" << endl; }
	}
	else
	{
		cout << "无法构成三角形" << endl;
	}

	return 0;
}