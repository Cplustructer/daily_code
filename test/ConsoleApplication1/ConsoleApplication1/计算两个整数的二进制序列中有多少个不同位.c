#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int get_difbits(int m,int n)
{
	int ret = m^n;
	int cnt = 0;
	for (int i = 1; i <= 32; i++)
	{
		if (((ret >> (i - 1)) & 1) == 1)
			cnt++;
	}
	return cnt;
}
int main()
{
	int a, b;
	printf("请输入两个整数：\n");
	scanf("%d %d",&a,&b);
	printf("一共有%d个bit位不同\n",get_difbits(a, b));
	system("pause");
	return 0;
}