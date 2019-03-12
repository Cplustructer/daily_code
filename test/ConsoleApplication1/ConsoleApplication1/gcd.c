#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int gcd(int a, int b)
{
	return b ? gcd(b, a%b) : a;
}

int main()
{
	int a, b;
	printf("please input the a and b:");
	scanf("%d %d",&a,&b);
	printf("%d\n",gcd(a,b));
	system("pause");
	return 0;
}