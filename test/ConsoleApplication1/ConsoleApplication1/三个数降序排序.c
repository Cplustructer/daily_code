#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{ 
	int a, b, c,temp;
	scanf("%d %d %d",&a,&b,&c);
	if (a < b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	if (a < c)
	{
		temp = a;
		a = c;
		c = temp;
	}
    if (b < c)
	{
		temp = b;
		b = c;
		c = temp;
	}
	printf("%d %d %d\n",a,b,c);
	system("pause");
	return 0;
}