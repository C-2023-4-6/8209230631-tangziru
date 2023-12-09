#include<iostream>
using namespace std;

void BobbleSort(double num[],int len)
{
	for (int i = 0;i < len - 1;i++)
	{
		for (int j = 0;j < len - 1 - i;j++)
		{
			if (num[j] > num[j + 1])
			{
				double temp = num[j + 1];
				num[j + 1] = num[j];
				num[j] = temp;
			}
		}
	}
}

int main()
{
	const int len = 10;
	double num[len];//定义数组

	cout << "请输入十个数： ";
	for (int i = 0;i < 10;i++)//用户输入数据
	{
		cin >> num[i];
	}

	cout << "您输入的数为： ";
	for (int i = 0;i < 10;i++)
	{
		cout << num[i]<<" ";
	}
	cout << endl;

	BobbleSort(num, len);
	cout << "排序后数据为： ";
	for (int i = 0;i < 10;i++)
	{
		cout << num[i]<<" ";
	}


	return 0;
}