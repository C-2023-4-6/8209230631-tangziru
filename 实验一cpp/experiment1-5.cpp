#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double f;
	cout << "������һ�������¶ȣ�";
	cin >> f;//��ȡ�����¶�

	double c = (f - 32) / 1.8;
	cout << "ת��Ϊ�����¶�Ϊ��" << fixed <<setprecision(2)<<c << "��C"<<endl;

	return 0;
}