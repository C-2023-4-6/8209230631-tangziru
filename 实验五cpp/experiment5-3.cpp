#include<iostream>
using namespace std;

class cuboid
{
public:
	void setL()//获取长
	{
		cout << "请输入长： " ;
		cin >> length;
	}

	void setW()
	{
		cout << "请输入宽： ";
		cin >> width;
	}

	void setH()
	{
		cout << "请输入高： ";
		cin >> height;
	}

	double V()//获取体积
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
	cout << "请输入第一个长方体的长宽高" <<endl;
	c1.setL();
	c1.setW();
	c1.setH();
	cout << "体积为： "<<c1.V() << endl;
	cout << "请输入第二个长方体的长宽高" << endl;
	c2.setL();
	c2.setW();
	c2.setH();
	cout << "体积为： " << c2.V() << endl;
	cout << "请输入第三个长方体的长宽高" << endl;
	c3.setL();
	c3.setW();
	c3.setH();
	cout << "体积为： " <<c3.V()<<endl;

	return 0;
}