#include<iostream>
using namespace std;

int main()
{
	bool locker[100] = { 0 };//����һ�ٸ����ŵĴ����
	
	for (int stu = 1;stu <= 100;stu++)//100��ѧ�����β���
	{
		if (stu == 1)
		{
			for (int i = 0;i < 100;i++)
			{
				locker[i] = !locker[i];
			}
		}
		else
		{
			for (int loc = stu-1;loc < 100;loc += stu)//�ӵ�stu�����ӿ�ʼ��ÿ��stu���ı�״̬
			{
				locker[loc] = !locker[loc];//�ı����״̬
			}
		}
	}

	cout << "���տ��ŵĹ����У�";
	for (int i = 0;i <100;i++)
	{
		if (locker[i] == 1)
		{
			cout << i+1 << " ";
		}
	}

	return 0;
}