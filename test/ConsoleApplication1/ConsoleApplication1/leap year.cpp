#include<stdio.h>
#include<stdlib.h>
int main()
{
	int year;
	printf("please input the year between 1000 and 2200:");
	scanf_s("%d",&year);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	system("pause");
	return 0;
}