#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int DigitSum(int n)
{
	int m = 0;
	int ret = 0;
	if (n < 10){
		ret = n;
	}
	else{
		m = n % 10;
		n = n / 10;
		ret = m + DigitSum(n);
	}
	return ret;
}
int main()
{
	int n;
	printf("请输入你想组合的数字:\n");
	scanf("%d",&n);
	printf("the result is:%d\n",DigitSum(n));
	return 0;
}