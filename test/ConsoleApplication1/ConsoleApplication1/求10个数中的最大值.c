#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j,MAX=0;
	int arry[10];
	printf("Please input the arry[]:");
	for (i = 0; i < 10; i++)
	{
	   scanf("%d",&arry[i]);
	}
	MAX = arry[0];
	for (j = 0; j < 10; j++)
	{
		if (arry[j]>MAX)
		{
			MAX = arry[j];
		}
	}
	printf("%d\n",MAX);
	system("pause");
	return 0;

}