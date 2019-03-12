#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int avg1(int a, int b)
{
	return a + ((b - a) >> 1);
}
int avg2(int a, int b)
{
	return (a&b) + ((a^b) >> 1);
}
int main()
{
	int a, b;
	printf("请输入两个数：\n");
	scanf("%d %d",&a,&b);
	printf("avg1=%d\n",avg1(a,b));
	printf("avg2=%d\n",avg2(a,b));
	system("pause");
	return 0;
}