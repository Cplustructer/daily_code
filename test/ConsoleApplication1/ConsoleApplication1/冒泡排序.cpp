//冒泡排序算法
#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int a[5];
	cout << "please input the arry[]:" << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}
	int temp;                                    //定义一个中间变量来交换两个数
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5 - i - 1; j++)
		{
			if (a[j + 1]<a[j])
			{
				temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
		}

	}
	cout << "the result is:" << endl;
	for (int i = 0; i < 5; i++)
	{
		if (i != 4)                          //这个if和else是为了达到数字在一行的效果，并且中间有空格，当然这是我自己的想法，如果你有其他方法也欢迎评论!
		{
			cout << a[i] << " ";
		}
		else
		{
			cout << a[i] << endl;
		}

	}
	system("pause");                        //这个少不了大家出学C++都知道，为了让他能一直显示，而不是闪现
	return 0;

}