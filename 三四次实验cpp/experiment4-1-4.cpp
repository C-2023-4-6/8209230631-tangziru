#include<iostream>
using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int i = 0;//指向list1的索引
	int j = 0;//指向list2的索引
	int k = 0;//指向list3的索引

	//依次比较list1和list2中的元素，并将较小的元素放入list3
	while (i < size1 && j < size2)
	{
		if (list1[i] < list2[j])
		{
			list3[k++] = list1[i++];
		}
		else
		{
			list3[k++] = list2[j++];
		}
	}
	//如果其中一个数组已经遍历完，将另一个数组中剩下的元素依次放入list3
	while (i < size1)
	{
		list3[k++] = list1[i++];
	}
	while (j < size2)
	{
		list3[k++] = list2[j++];
	}
}

int main()
{
	const int MaxSize = 80;
	int list1[MaxSize];
	int list2[MaxSize];
	int list3[MaxSize*2];

	int size1, size2;

	cout << "请输入第一个数组元素数： ";
	cin >> size1;
	cout << "请输入第一个排列好的数组：";
	for (int i = 0;i < size1;i++)
	{
		cin >> list1[i];
	}

	cout << "请输入第二个数组元素数： ";
	cin >> size2;
	cout << "请输入第二个排列好的数组：";
	for (int i = 0;i < size2;i++)
	{
		cin >> list2[i];
	}

	merge(list1, size1, list2, size2, list3);
	cout << "合并后的数组为： ";
	for (int i = 0;i < size1 + size2;i++)
	{
		cout << list3[i] << " ";
	}

	return 0;
}