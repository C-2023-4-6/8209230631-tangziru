#include<iostream>
using namespace std;


int main()
{
	int a, b;


	cout << "请输入两个正整数：";
	cin >> a >> b;

	//计算最大公约数
	int gcd = 1;
	for (int i = 1;i <= a && i <= b;++i)
	{
		if (a % i == 0 && b % i == 0)
		{
			gcd = i;
		}
	}

	//计算最小公倍数
	int lcm = (a * b) / gcd;

	//输出结果
	cout << "最大公约数为：" << gcd << endl;
	cout << "最小公倍数为：" << lcm << endl;


	return 0;
}