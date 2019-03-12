#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//int fun(int n)
//{
//	int ret = 1;
//	if (n == 1){
//		ret = 1;
//	}
//	else{
//		ret = n*fun(n-1);
//	}
//	return ret;
//}
int fun1(int n)
{
	int ret = 1;
	for (int i = n; i >= 1; i--){
		ret = ret*i;
	}
	return ret;
}

int main()
{
	int n;
	printf("请输入阶数：\n");
	scanf("%d",&n);
	//printf("%d的阶乘为：%d\n",n,fun(n));
	printf("%d的阶乘为：%d\n", n, fun1(n));
	system("pause");
	return 0;
}