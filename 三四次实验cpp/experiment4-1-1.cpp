#include<iostream>
using namespace std;

int main()
{
	const int SIZE = 10;
	double num[SIZE];
	int count = 0;
	double* p = new double[SIZE];
	
	cout << "Enter ten numbers: ";//用户输入数据
	for(int i=0;i<SIZE;i++)
	{
		cin >> num[i];

		bool isDuplicate = 0;//标记是否为重复数字 是重复的标记为false
     	for (int j = 0;j < count;j++)
		{
			if (num[i] == *(p + j))//如果数据重复，标记为true
			{
				isDuplicate = 1;
				break;
			}
		}

		if (!isDuplicate)//如果不重复，将数据存入新数组
		{
			*(p + count) = num[i];
			count++;//计数+1
		}
	}

	cout << "The distinct numbera are: ";//输出结果
	for (int i = 0;i <count;i++)
	{
		cout << *(p + i)<<" ";
	}

	delete[] p;//释放内存

	return 0;
}