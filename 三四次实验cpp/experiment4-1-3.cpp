#include<iostream>
using namespace std;

int main()
{
	bool locker[100] = { 0 };//定义一百个关着的储物柜
	
	for (int stu = 1;stu <= 100;stu++)//100个学生依次操作
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
			for (int loc = stu-1;loc < 100;loc += stu)//从第stu个柜子开始，每隔stu个改变状态
			{
				locker[loc] = !locker[loc];//改变柜子状态
			}
		}
	}

	cout << "最终开着的柜子有：";
	for (int i = 0;i <100;i++)
	{
		if (locker[i] == 1)
		{
			cout << i+1 << " ";
		}
	}

	return 0;
}