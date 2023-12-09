#include<iostream>
using namespace std;

int main()
{
	const float PI = 3.14159;//定义圆周率的大小
    float r, h,x;//定义圆锥的底面半径、高、体积

	//要求键盘输入半径、锥高
	cout << "请输入圆锥底的半径：";
	cin >> r;
	cout << "请输入圆锥的锥高：" ;
	cin >> h;

	float v = (PI * r * r * h) / 3;//计算体积

	cout << "圆锥的体积为：" << v << endl;//输出体积
	return 0;

}