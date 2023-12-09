#include<iostream>
using namespace std;

int countPeach(int day)
{
	if (day == 10)
	{
		return 1;
	}//第十天只剩一个桃子
	else
	{
		//每天剩下的桃子数等于前一天的桃子数量的一半再减一
		return(countPeach(day + 1) + 1) * 2;
	}
}

int main()
{
	int num = countPeach(1);//第一天桃子数量
	cout << "第一天猴子摘了" << num << "只桃子" << endl;
	return 0;
}