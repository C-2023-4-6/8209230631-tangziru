#include<iostream>
#include<string>
using namespace std;

int main()
{
	//�����ַ�
	string input;
	cout << "������һ���ַ���";
	getline(cin, input); // ʹ��getline����ȡ��������

	//ͳ�Ƹ���
	int letter = 0;
	int space = 0;
	int number = 0;
	int other = 0;

	for (char c : input)//�����ַ����е�ÿ���ַ�
	{
		if((c>='a'&&c<='z')|| (c >= 'A' && c <= 'Z'))
		{
			letter++;
		}
		else if (c == ' ' || c == '\t')
		{
			space++;
		}
		else if (c >= '0' && c <= '9')
		{
			number++;
		}
		else
		{
			other++;
		}
	}

	//������
	cout << "Ӣ����ĸ����Ϊ:" << letter << endl;
	cout << "�ո����Ϊ��" << space << endl;
	cout << "���ָ���Ϊ��" << number << endl;
	cout << "�����ַ�����Ϊ��" << other << endl;

	return 0;
}