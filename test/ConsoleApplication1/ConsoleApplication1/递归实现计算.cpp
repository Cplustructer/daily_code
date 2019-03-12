#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int n, k;
int mul(int n,int k) 
{
	int ret = 0;
	if (k == 0){
		ret = 1;
	}
	else{
		ret = n*mul(n, k - 1);
	}
	return ret;
}
int main()
{
	printf("请输入你想算的底数和阶数:\n");
	scanf("%d %d",&n,&k);
	printf("the result is:%d\n",mul(n, k));
	system("pause");
	return 0;
}