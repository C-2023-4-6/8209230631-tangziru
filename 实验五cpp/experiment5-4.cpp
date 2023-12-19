#include<iostream>
using namespace std;

class student
{
public:
	void set_id()
	{
		cout << "请输入学号： ";
		cin >> id;
	}
	void set_sco()
	{
		cout << "请输入成绩： ";
		cin >> score;
	}


	int id;
	int score;
};

int max(student* stud)
{
	for (int i = 0; i < 5-1; i++)
	{
		for (int j = 0;j < 5 - 1 - i;j++)
		{
			if (stud[j].score > stud[j+1].score)
			{
				student temp = stud[j+1];
				stud[j+1] = stud[j];
				stud[j] = temp;
			}
		}
	}
	return stud[4].id;
}

int main()
{
	student stu[5];
	for (int i = 0;i < 5;i++)
	{
		cout << "请输入第"<<i+1<<"名学生数据：" << endl;
		stu[i].set_id();
		stu[i].set_sco();
	}
	cout << "最高成绩者学号为： " << max(&stu[0]) << endl;



	return 0;
}