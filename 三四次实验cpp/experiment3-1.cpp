#include<iostream>
#include<algorithm>//ʹ������С����
using namespace std;

//�������Լ������С����������
void CommonDivisorAndMutiple(unsigned num1, unsigned num2,unsigned& gcd, unsigned& lcm)
{
	
	for (int a = 1;a <=min(num1,num2);a++)
	{
		if (num1 % a == 0 && num2 % a == 0)
		{
			gcd = a;
		}
	}

     lcm =(num1*num2)/gcd;//��С������*���Լ��=�������ĳ˻�
}

int main()
{
	unsigned int i, j,gcd,lcm;

	//�û�����
	cout << "������������Ȼ����";
	cin >> i >> j;

	CommonDivisorAndMutiple(i, j,gcd,lcm);//���ú���

	//������
	cout << "���ߵ����Լ��Ϊ�� " << gcd << endl;
	cout << "���ߵ���С������Ϊ�� " << lcm << endl;
	

	return 0;
}