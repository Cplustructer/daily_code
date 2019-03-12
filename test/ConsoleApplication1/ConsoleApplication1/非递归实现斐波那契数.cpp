#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int fun1(int n)
{
	int first = 1;
	int second = 1;
	int fib = 0;
	for (int i = 3; i <= n; i++){
		fib = first + second;
		first = second;
		second = fib;
	}
	return fib;
}
int main()
{
	int n;
	printf("please input the n;\n");
	scanf("%d",&n);
	printf("the result is:%d\n",fun1(n));
	system("pause");
	return 0;
}