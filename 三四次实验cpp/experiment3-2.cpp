#include<iostream>
using namespace std;

bool is_prime(int num);

int main()
{
	
	int count = 0;//��������
	for (int num = 2;count < 200;num++)
	{
		if (is_prime(num))//�����ж���������
		{
			cout << num << '\t';
			count++;
			if (count % 10 == 0)//ÿʮ����������
			{
				cout << endl;
			}
		}
	}

	return 0;
}

bool is_prime(int num)
{
	if (num == 1)//1��������
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