#include<iostream>
using namespace std;

int main()
{
	char oc;
	float a, b;
	cout << "�밴˳��������������";
	cin >> a >> b;
	cout << "�������������";
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
			cout << "��������Ϊ0" << endl;
		}
		break;
	case '%':
		if (b != 0)
		{
			cout << a << "%" << b << " = " << static_cast<int>(a) % static_cast<int>(b) << endl;
		}
		else
		{
			cout << "��������Ϊ0" << endl;
		}
		break;

	default:
		cout << "��������Ч�����" << endl;
	}
	return 0;
}