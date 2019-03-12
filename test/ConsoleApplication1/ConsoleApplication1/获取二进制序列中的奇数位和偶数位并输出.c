#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void print(int n)
{//获取奇数位
	for (int i = 31; i >= 1; i-=2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
  //获取偶数位
	for (int i = 30; i >= 0; i-=2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
}
int main()
{
	int n;
	printf("请输入二进制序列：\n");
	scanf("%d",&n);
	print(n);
	system("pause");
	return 0;
}