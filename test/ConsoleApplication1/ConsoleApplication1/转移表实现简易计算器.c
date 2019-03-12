#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int add(int a,int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a*b;
}
int div1(int a, int b)
{
	return a / b;
}
int main()
{
	int x, y;
	int input = 1;
	int ret = 0;
	int(*p[5])(int x, int y) = {0,add,sub,mul,div1};
	while (input)
	{
		printf("*********************\n");
		printf("**1.add       2.sub**\n");
		printf("**3.mul       4.div1**\n");
		printf("*********************\n");
		printf("请选择:");
		scanf("%d",&input);
		if (input >= 1 && input <= 4)
		{
			printf("请输入操作数：");
			scanf("%d %d", &x, &y);
			ret = (*p[input])(x, y);
		}
		else
			printf("输入有误！");
		printf("ret = %d\n",ret);
	}
	system("pause");
	return 0;
}