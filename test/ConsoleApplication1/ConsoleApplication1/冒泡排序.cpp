//ð�������㷨
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
	int temp;                                    //����һ���м����������������
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
		if (i != 4)                          //���if��else��Ϊ�˴ﵽ������һ�е�Ч���������м��пո񣬵�Ȼ�������Լ����뷨�����������������Ҳ��ӭ����!
		{
			cout << a[i] << " ";
		}
		else
		{
			cout << a[i] << endl;
		}

	}
	system("pause");                        //����ٲ��˴�ҳ�ѧC++��֪����Ϊ��������һֱ��ʾ������������
	return 0;

}