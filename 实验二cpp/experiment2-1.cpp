#include<iostream>
using namespace std;

int main()
{
	char ch;
	cout << "请输入一个字符:" ;
	cin >> ch;
	if (ch >= 'a' && ch <= 'z')
	{
		char CH = ch - 32;
		cout <<"它的大写字母为：" <<CH << endl;
	}
	else
	{
		char nextch = ch +1;
		cout << "其后继字符的ASCII码为：" << (int)nextch << endl;;
	}
	return 0;
}