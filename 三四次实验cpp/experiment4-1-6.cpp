#include<iostream>
#include<cctype>//ʹ��isalpha������tolower����
using namespace std;

void count(const char s[], int counts[])
{
	for (int i = 0;s[i] != '\0';i++)//�����ַ���
	{
		if (isalpha(s[i]))//����ĸ��isalpha����Ϊ�棬��ֻ������ĸԪ��
		{
			char lowercase = tolower(s[i]);//��tolower��������ĸͳһ��Сд��ʽ����ֵ��lowercase
			int index = lowercase - 'a';//��Сд��ĸlowercaseת��Ϊ�����a(97)��ƫ����,��ֵ��index
			counts[index]++;//ͨ��ƫ����ȷ����������ĸ��������+1
		}
	}
}

int main()
{
	char s[100];
	int counts[26] = { 0 };

	cout << "Enter a string: ";//�û������ַ���
	cin.getline(s, 100);

	count(s, counts);

	for (int i = 0;i < 26;i++)
	{
		if (counts[i] > 0)
		{
			char letter = 'a' + i;//ͨ��ƫ����ȷ����ĸ
			cout << letter << ": " << counts[i] << " times" << endl;//������
		}
	}

	return 0;
}