#include<iostream>
using namespace std;

bool is_prime(int num);

int main()
{
	
	int count = 0;//素数数量
	for (int num = 2;count < 200;num++)
	{
		if (is_prime(num))//调用判断素数函数
		{
			cout << num << '\t';
			count++;
			if (count % 10 == 0)//每十个素数换行
			{
				cout << endl;
			}
		}
	}

	return 0;
}

bool is_prime(int num)
{
	if (num == 1)//1不是素数
	{
		return false;
	}
	else
	{
		for (int i = 2;i< num;i++)
		{
			if (num % i == 0)
			{
				return false;
			}
		}
		return true;
	}
}