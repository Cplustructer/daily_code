#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void print(int n)
{//��ȡ����λ
	for (int i = 31; i >= 1; i-=2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
  //��ȡż��λ
	for (int i = 30; i >= 0; i-=2)
	{
		printf("%d ", (n >> i) & 1);
	}
	printf("\n");
}
int main()
{
	int n;
	printf("��������������У�\n");
	scanf("%d",&n);
	print(n);
	system("pause");
	return 0;
}