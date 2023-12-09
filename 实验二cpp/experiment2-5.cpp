#include<iostream>
#include<string>
using namespace std;

int main()
{
	//输入字符
	string input;
	cout << "请输入一行字符：";
	getline(cin, input); // 使用getline来获取整行输入

	//统计个数
	int letter = 0;
	int space = 0;
	int number = 0;
	int other = 0;

	for (char c : input)//遍历字符串中的每个字符
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

	//输出结果
	cout << "英文字母个数为:" << letter << endl;
	cout << "空格个数为：" << space << endl;
	cout << "数字个数为：" << number << endl;
	cout << "其它字符个数为：" << other << endl;

	return 0;
}