#include<iostream>
using namespace std;

class point
{
public:
	point(double x0, double y0)//有参构造函数
	{
		x = x0;
		y = y0;
	}
	void setpoint(int i, int j)
	{
		x = i + 60;
		y = j + 80;
	}
	void display()
	{
		cout << "坐标值为" << "(" << x << "," << y << ")" << endl;
	}

private:
	int x;
	int y;
};

int main()
{
	point p1(60,80);
	cout<<"初始： ";
	p1.display();

	int i, j;
	cout << "请分别输入横纵坐标要加的数： ";
	cin >> i >> j;
	p1.setpoint(i,j);
	cout << "修改一次后： ";
	p1.display();

	return 0;
}