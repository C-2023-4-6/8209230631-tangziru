#include <iostream>
using namespace std;

int main() 
{
    double a;
    cout << "������һ������";
    cin >> a;

    if (a < 0) 
    {
        cout << "�޷����㸺����ƽ����" << endl;
    }//����Ϊ���������

    else 
    {
        double xn = a;
        double xn1;

        do {
            xn1 = xn;
            xn = 0.5 * (xn + a / xn);//ƽ����������ʽ
        } while (xn1 - xn >= 1e-10 || xn - xn1 >= 1e-10);//���þ���

            cout << "��ƽ����Ϊ��" << xn1 << endl;
    }


    return 0;
}