#include<iostream>
using namespace std;

void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int i = 0;//ָ��list1������
	int j = 0;//ָ��list2������
	int k = 0;//ָ��list3������

	//���αȽ�list1��list2�е�Ԫ�أ�������С��Ԫ�ط���list3
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
	//�������һ�������Ѿ������꣬����һ��������ʣ�µ�Ԫ�����η���list3
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

	cout << "�������һ������Ԫ������ ";
	cin >> size1;
	cout << "�������һ�����кõ����飺";
	for (int i = 0;i < size1;i++)
	{
		cin >> list1[i];
	}

	cout << "������ڶ�������Ԫ������ ";
	cin >> size2;
	cout << "������ڶ������кõ����飺";
	for (int i = 0;i < size2;i++)
	{
		cin >> list2[i];
	}

	merge(list1, size1, list2, size2, list3);
	cout << "�ϲ��������Ϊ�� ";
	for (int i = 0;i < size1 + size2;i++)
	{
		cout << list3[i] << " ";
	}

	return 0;
}