#include <iostream>
using namespace std;

int main() 
{
    double a;
    cout << "请输入一个数：";
    cin >> a;

    if (a < 0) 
    {
        cout << "无法计算负数的平方根" << endl;
    }//输入为负数的情况

    else 
    {
        double xn = a;
        double xn1;

        do {
            xn1 = xn;
            xn = 0.5 * (xn + a / xn);//平方根迭代公式
        } while (xn1 - xn >= 1e-10 || xn - xn1 >= 1e-10);//设置精度

            cout << "其平方根为：" << xn1 << endl;
    }


    return 0;
}