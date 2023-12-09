#include<iostream>
using namespace std;

int main()
{
	double price = 0.8;
	int total=0;
	int day = 0;

	for (int apple = 2;apple <= 100;apple *= 2)
	{
		total += apple;
		day++;
	}

	double average = (total * price) / day;
	cout << "每天平均花" << average << "元" << endl;

	return 0;
}