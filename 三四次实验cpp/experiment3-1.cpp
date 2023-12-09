#include<iostream>
#include<algorithm>//使用求最小函数
using namespace std;

//定义最大公约数和最小公倍数函数
void CommonDivisorAndMutiple(unsigned num1, unsigned num2,unsigned& gcd, unsigned& lcm)
{
	
	for (int a = 1;a <=min(num1,num2);a++)
	{
		if (num1 % a == 0 && num2 % a == 0)
		{
			gcd = a;
		}
	}

     lcm =(num1*num2)/gcd;//最小公倍数*最大公约数=两个数的乘积
}

int main()
{
	unsigned int i, j,gcd,lcm;

	//用户输入
	cout << "请输入两个自然数：";
	cin >> i >> j;

	CommonDivisorAndMutiple(i, j,gcd,lcm);//调用函数

	//输出结果
	cout << "二者的最大公约数为： " << gcd << endl;
	cout << "二者的最小公倍数为： " << lcm << endl;
	

	return 0;
}