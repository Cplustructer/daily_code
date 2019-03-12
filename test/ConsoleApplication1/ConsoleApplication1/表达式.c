#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	int a, num;
	int k = 0;
	int sum = 0;
	printf("please input the a and num:");
	scanf("%d %d",&a,&num);
	for (i = 0; i < num;i++)
	{
		k = k * 10 + a;
		sum += k;
	}
	printf("%d\n",sum);
	system("pause");
	return 0;
}