#include<iostream>
using namespace std;

int main()
{
	const int SIZE = 10;
	double num[SIZE];
	int count = 0;
	double* p = new double[SIZE];
	
	cout << "Enter ten numbers: ";//�û���������
	for(int i=0;i<SIZE;i++)
	{
		cin >> num[i];

		bool isDuplicate = 0;//����Ƿ�Ϊ�ظ����� ���ظ��ı��Ϊfalse
     	for (int j = 0;j < count;j++)
		{
			if (num[i] == *(p + j))//��������ظ������Ϊtrue
			{
				isDuplicate = 1;
				break;
			}
		}

		if (!isDuplicate)//������ظ��������ݴ���������
		{
			*(p + count) = num[i];
			count++;//����+1
		}
	}

	cout << "The distinct numbera are: ";//������
	for (int i = 0;i <count;i++)
	{
		cout << *(p + i)<<" ";
	}

	delete[] p;//�ͷ��ڴ�

	return 0;
}