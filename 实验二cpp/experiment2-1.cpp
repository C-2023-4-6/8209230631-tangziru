#include<iostream>
using namespace std;

int main()
{
	char ch;
	cout << "������һ���ַ�:" ;
	cin >> ch;
	if (ch >= 'a' && ch <= 'z')
	{
		char CH = ch - 32;
		cout <<"���Ĵ�д��ĸΪ��" <<CH << endl;
	}
	else
	{
		char nextch = ch +1;
		cout << "�����ַ���ASCII��Ϊ��" << (int)nextch << endl;;
	}
	return 0;
}