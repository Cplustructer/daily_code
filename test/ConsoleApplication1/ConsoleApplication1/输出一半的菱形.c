
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j;
	for (i = 0; i < 7; i++)
	{
		for (j = 1; j <= (2*i+1); j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 6; i>0; i--)
	{
		for (j = (2 * i - 1); j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}