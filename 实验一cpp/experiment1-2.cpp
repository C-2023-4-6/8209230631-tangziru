#include<iostream>
using namespace std;

int main()
{
	const float PI = 3.14159;//����Բ���ʵĴ�С
    float r, h,x;//����Բ׶�ĵ���뾶���ߡ����

	//Ҫ���������뾶��׶��
	cout << "������Բ׶�׵İ뾶��";
	cin >> r;
	cout << "������Բ׶��׶�ߣ�" ;
	cin >> h;

	float v = (PI * r * r * h) / 3;//�������

	cout << "Բ׶�����Ϊ��" << v << endl;//������
	return 0;

}