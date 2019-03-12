#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b,temp = 0;
	printf("Please input the a and b:");
	scanf_s("%d %d",&a,&b);
	temp = a;
	a = b;
	b = temp;
	printf("%d %d",a,b);
	system("pause");
	return 0;
}