#include<iostream>
using namespace std;

int main()
{
	double x, y = 0;
	cout << "������0-10֮���һ������";
	cin >> x;
	if (x > 0 && x < 10)
	{
		if (x > 0 && x < 5)
		{
			if (x >= 1) { y = 2.0 / (4 * x) + 1; }
			else y = 3 - 2 * x;
		}
		else
		{
			y = x*x;
		}
		cout << "y=" << y << endl;
	}
	else
	{
		cout << "������������ڶ�������" << endl;
	}

	return 0;
}