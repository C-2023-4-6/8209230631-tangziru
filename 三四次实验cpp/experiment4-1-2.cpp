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
	double num[len];//��������

	cout << "������ʮ������ ";
	for (int i = 0;i < 10;i++)//�û���������
	{
		cin >> num[i];
	}

	cout << "���������Ϊ�� ";
	for (int i = 0;i < 10;i++)
	{
		cout << num[i]<<" ";
	}
	cout << endl;

	BobbleSort(num, len);
	cout << "���������Ϊ�� ";
	for (int i = 0;i < 10;i++)
	{
		cout << num[i]<<" ";
	}


	return 0;
}