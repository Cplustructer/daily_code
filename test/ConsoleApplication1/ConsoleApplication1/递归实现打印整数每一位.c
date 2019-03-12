#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int print(int num)
{
	if (num < 10)
	{
		printf("%d ",num);
	}
	else
	{
		print(num / 10);
		printf("%d ",num%10);
	}
}
int main()
{
	int num;
	printf("ÇëÊäÈëÕûÊý:\n");
	scanf("%d",&num);
	print(num);
	printf("\n");
	system("pause");
	return 0;
}