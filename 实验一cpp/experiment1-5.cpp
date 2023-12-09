#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double f;
	cout << "请输入一个华氏温度：";
	cin >> f;//获取华氏温度

	double c = (f - 32) / 1.8;
	cout << "转换为摄氏温度为：" << fixed <<setprecision(2)<<c << "°C"<<endl;

	return 0;
}