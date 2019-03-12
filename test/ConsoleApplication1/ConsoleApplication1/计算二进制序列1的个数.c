#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int count_one_bits(unsigned int val)
{
	int count = 0;
	for (int i = 1; i <= 32; i++)
	{
		if (((val >> (i - 1)) & 1) == 1)
			count++;
	}
	return count;
}
int main()
{
	unsigned int n;
	printf("请输入二进制序列:\n");
	scanf("%u",&n);
	printf("该二进制序列中1的个数为:%d个\n",count_one_bits(n));
	system("pause");
	return 0;
}