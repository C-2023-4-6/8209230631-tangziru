#include<iostream>
#include<string>
using namespace std;

int indexOf(const char s1[], const char s2[])
{
	int i = 0, j = 0;
	while (s2[i] != '\0')//��s2��ÿ���ַ����б���ֱ���������ַ���s2������
	{
		if (s2[i] == s1[j])//s1��s2����ͬ���ַ�����ʱ
		{
			j++;//ָ��s1����һ���ַ�
			if (s1[j] == '\0')//�����һ���ַ��ǿգ�֤��s1��ȫ������s2�У����Ӵ�
			{
				return i-j+1;//s2��s1��ʼ��λ��
			}
		}
		else//û����ȫƥ����ʱ���ڵ�ǰλ��û���ҵ�ƥ����Ӵ���s2���ݵ���һ��ƥ���ϵ�λ�ã���s1[0]��ʼ����ƥ��
    	{
			i = i - j;
			j = 0;
		}
		i++;//�����Ƿ��ҵ�ƥ�䣬��Ҫ��i������ƥ����һ��
	}
	return -1;//����s2����ƥ�䣬����-1
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