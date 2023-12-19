#include<iostream>
using namespace std;

class Time //定义Time类
{
public://成员函数为公用的
	void sethour(int h)//设置小时
	{
		hour = h;
	}
	int gethour()//获取小时
	{
		return hour;
	}

	void setmin(int m)//设置分钟
	{
		minite = m;
	}
	int getmin()//获取分钟
	{
		return minite;
	}
	
	void setsec(int s)//设置秒
	{
		sec =s;
	}
	int getsec()//获取秒
	{
		return sec;
	}


private://数据成员为私有的
	int hour;
	int minite;
	int sec;
};

int main()
{
	Time t1;//定义t1为Time类对象
	int h1, m1, s1;

//输入设定的时间

	cin >> h1;
	t1.sethour(h1);
	cin >> m1;
	t1.setmin(m1);
	cin >> s1;
	t1.setsec(s1);

	cout << t1.gethour() << ":"<<t1.getmin()<<":" << t1.getsec() << endl;//输出时间

	return 0;
}

