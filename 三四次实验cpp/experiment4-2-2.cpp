#include<iostream>
using namespace std;

int parseHex(const char* const hexString)
{
	int len = 0;//数组长度
	while (hexString[len] != '\0') {
		len++;
	}
	
	int result = 0;
	for (int i = 0; i < len; i++)//遍历
	{
		int digit;
		if (hexString[i] >= '0' && hexString[i] <= '9')
		{
			digit = hexString[i] - '0';
		}
		else if (hexString[i] >= 'A' && hexString[i] <= 'F')
		{
			digit = hexString[i] - 'A'+10;
		}
		else if (hexString[i] >= 'a' && hexString[i] <= 'f')
		{
			digit = hexString[i] - 'a' + 10;
		}
		else 
		{
			cout << "请输入有效的十六进制数" << endl;
			return 0;
		}
		result = result * 16 + digit;
	}
	return result;
}

int main()
{
	char hexString[100];
	cout << "请输入需要转换的十六进制数： ";
	cin>>hexString;

	int i = parseHex(hexString);
	cout <<"转换后的十进制数为： "<< i << endl;

	return 0;
}