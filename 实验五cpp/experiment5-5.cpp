#include<iostream>
using namespace std;

class point
{
public:
	point(double x0, double y0)//�вι��캯��
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
		cout << "����ֵΪ" << "(" << x << "," << y << ")" << endl;
	}

private:
	int x;
	int y;
};

int main()
{
	point p1(60,80);
	cout<<"��ʼ�� ";
	p1.display();

	int i, j;
	cout << "��ֱ������������Ҫ�ӵ����� ";
	cin >> i >> j;
	p1.setpoint(i,j);
	cout << "�޸�һ�κ� ";
	p1.display();

	return 0;
}