#include<iostream>
using namespace std;

int main()
{
	char oc;
	float a, b;
	cout << "请按顺序输入两个数：";
	cin >> a >> b;
	cout << "请输入运算符：";
	cin >> oc;
	switch (oc)
	{
	case '+':
		cout << a<<"+" << b<<" = " << a + b << endl;
		break;
	case '-':
		cout << a << "-" << b << " = " << a - b << endl;
		break;
	case '*':
		cout << a << "*" << b << " = " << a * b << endl;
		break;
	case '/':
		if(b!=0)
		{ 
			cout << a << "/" << b << " = " << a / b << endl;
		}
		else 
		{
			cout << "除数不可为0" << endl;
		}
		break;
	case '%':
		if (b != 0)
		{
			cout << a << "%" << b << " = " << static_cast<int>(a) % static_cast<int>(b) << endl;
		}
		else
		{
			cout << "除数不可为0" << endl;
		}
		break;

	default:
		cout << "请输入有效运算符" << endl;
	}
	return 0;
}