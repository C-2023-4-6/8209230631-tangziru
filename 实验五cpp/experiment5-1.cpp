#include<iostream>
using namespace std;

class Time //����Time��
{
public://��Ա����Ϊ���õ�
	void sethour(int h)//����Сʱ
	{
		hour = h;
	}
	int gethour()//��ȡСʱ
	{
		return hour;
	}

	void setmin(int m)//���÷���
	{
		minite = m;
	}
	int getmin()//��ȡ����
	{
		return minite;
	}
	
	void setsec(int s)//������
	{
		sec =s;
	}
	int getsec()//��ȡ��
	{
		return sec;
	}


private://���ݳ�ԱΪ˽�е�
	int hour;
	int minite;
	int sec;
};

int main()
{
	Time t1;//����t1ΪTime�����
	int h1, m1, s1;

//�����趨��ʱ��

	cin >> h1;
	t1.sethour(h1);
	cin >> m1;
	t1.setmin(m1);
	cin >> s1;
	t1.setsec(s1);

	cout << t1.gethour() << ":"<<t1.getmin()<<":" << t1.getsec() << endl;//���ʱ��

	return 0;
}

