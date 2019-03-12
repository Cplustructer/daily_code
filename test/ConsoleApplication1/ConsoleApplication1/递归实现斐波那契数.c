#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int fun(int n)
{
	int result=0;
	if (n == 1 || n == 2){
		result = 1;
	}
	else{
		result = fun(n - 1) + fun(n - 2);
	}
	return result;
}
int main()
{
	int n;
	printf("please input the n;\n");
	scanf("%d",&n);
	printf("the result is:%d\n",fun(n));
	system("pause");
	return 0;
}