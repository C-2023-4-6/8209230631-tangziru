#include<iostream>
using namespace std;

int countPeach(int day)
{
	if (day == 10)
	{
		return 1;
	}//��ʮ��ֻʣһ������
	else
	{
		//ÿ��ʣ�µ�����������ǰһ�������������һ���ټ�һ
		return(countPeach(day + 1) + 1) * 2;
	}
}

int main()
{
	int num = countPeach(1);//��һ����������
	cout << "��һ�����ժ��" << num << "ֻ����" << endl;
	return 0;
}