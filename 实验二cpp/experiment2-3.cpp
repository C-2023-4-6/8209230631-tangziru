#include<iostream>
using namespace std;

int main()
{
	double a, b, c,l;//����a,b,c�����߳��Լ��ܳ�l
	cout << "�����������ε������߳���" ;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)//�ж��Ƿ񹹳�������
	{
		l = a + b + c;
		cout << "�������ܳ�Ϊ��" <<l<< endl;
		if (a == b || b == c || a == c)
		{
			cout << "��������Ϊ����������" << endl;
		}
		else { cout << "�������β�Ϊ����������" << endl; }
	}
	else
	{
		cout << "�޷�����������" << endl;
	}

	return 0;
}