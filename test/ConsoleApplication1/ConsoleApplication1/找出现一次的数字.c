#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//异或的结果和运算顺序无关
//对应位的异或结果和对应位所有数中1的个数有关，偶数个1，结果为0，奇数个1，结果为1

int get_once(int a[])
{
	int ret = 0;
	for (int i = 0; i < 11; i++)
	{
		ret ^= a[i];
	}
	return ret;
}
int main()
{
	int a[11];
	printf("请输入11个整数：\n");
	for (int i = 0; i < 11; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d\n",get_once(a));
	system("pause");
	return 0;
}
