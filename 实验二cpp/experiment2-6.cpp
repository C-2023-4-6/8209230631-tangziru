#include<iostream>
using namespace std;


int main()
{
	int a, b;


	cout << "������������������";
	cin >> a >> b;

	//�������Լ��
	int gcd = 1;
	for (int i = 1;i <= a && i <= b;++i)
	{
		if (a % i == 0 && b % i == 0)
		{
			gcd = i;
		}
	}

	//������С������
	int lcm = (a * b) / gcd;

	//������
	cout << "���Լ��Ϊ��" << gcd << endl;
	cout << "��С������Ϊ��" << lcm << endl;


	return 0;
}