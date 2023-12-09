#include<iostream>
#include<cctype>//使用isalpha函数、tolower函数
using namespace std;

void count(const char s[], int counts[])
{
	for (int i = 0;s[i] != '\0';i++)//遍历字符串
	{
		if (isalpha(s[i]))//是字母则isalpha返回为真，即只考虑字母元素
		{
			char lowercase = tolower(s[i]);//用tolower函数将字母统一成小写形式并赋值给lowercase
			int index = lowercase - 'a';//将小写字母lowercase转换为相对于a(97)的偏移量,赋值给index
			counts[index]++;//通过偏移量确定到具体字母，并计数+1
		}
	}
}

int main()
{
	char s[100];
	int counts[26] = { 0 };

	cout << "Enter a string: ";//用户输入字符串
	cin.getline(s, 100);

	count(s, counts);

	for (int i = 0;i < 26;i++)
	{
		if (counts[i] > 0)
		{
			char letter = 'a' + i;//通过偏移量确定字母
			cout << letter << ": " << counts[i] << " times" << endl;//输出结果
		}
	}

	return 0;
}