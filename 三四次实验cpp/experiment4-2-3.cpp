#include<iostream>
using namespace std;

void bobbleSort(int* arr, int size)
{
	for (int i = 0;i < size - 1;i++)
	{
		for (int j=0;j<size-1-i;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main()
{
	int size;
	cout << "请输入元素个数： ";
	cin >> size;

	int* arr = new int[size];
	cout << "请输入数组元素： ";
	for (int i = 0;i < size;i++)
	{
		cin >> arr[i];
	}

	bobbleSort(arr, size);
	cout << "排序后数组元素为： ";
	for (int i = 0;i < size;i++)
	{
		cout << arr[i]<<" ";
	}
	
	delete[] arr;
	return 0;
}