#include<iostream>
using namespace std;

class cuboid
{
public:
	void setL()//��ȡ��
	{
		cout << "�����볤�� " ;
		cin >> length;
	}

	void setW()
	{
		cout << "������� ";
		cin >> width;
	}

	void setH()
	{
		cout << "������ߣ� ";
		cin >> height;
	}

	double V()//��ȡ���
	{
		return length *width* height;
	}

private:
	double length;
	double width;
	double height;
};

int main()
{
	cuboid c1, c2, c3;
	cout << "�������һ��������ĳ����" <<endl;
	c1.setL();
	c1.setW();
	c1.setH();
	cout << "���Ϊ�� "<<c1.V() << endl;
	cout << "������ڶ���������ĳ����" << endl;
	c2.setL();
	c2.setW();
	c2.setH();
	cout << "���Ϊ�� " << c2.V() << endl;
	cout << "�����������������ĳ����" << endl;
	c3.setL();
	c3.setW();
	c3.setH();
	cout << "���Ϊ�� " <<c3.V()<<endl;

	return 0;
}