#include<iostream>
#include<string>
using namespace std;

int indexOf(const char s1[], const char s2[])
{
	int i = 0, j = 0;
	while (s2[i] != '\0')//对s2的每个字符进行遍历直到遇到空字符（s2结束）
	{
		if (s2[i] == s1[j])//s1和s2有相同的字符出现时
		{
			j++;//指向s1的下一个字符
			if (s1[j] == '\0')//如果下一个字符是空，证明s1完全包含在s2中，是子串
			{
				return i-j+1;//s2中s1开始的位置
			}
		}
		else//没有完全匹配上时，在当前位置没有找到匹配的子串，s2回溯到第一个匹配上的位置，从s1[0]开始重新匹配
    	{
			i = i - j;
			j = 0;
		}
		i++;//无论是否找到匹配，都要将i递增，匹配下一轮
	}
	return -1;//遍历s2都不匹配，返回-1
}

int main()
{
	char s1[100] = { 0 };
	char s2[100] = { 0 };

	cout << "Enter the first string: ";
	cin.getline(s1,100);
	cout << "Enter the seceod string: ";
	cin.getline(s2,100);

	int i = indexOf(s1, s2);
	cout << i << endl;

	return 0;
}