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
	printf("���������������:\n");
	scanf("%u",&n);
	printf("�ö�����������1�ĸ���Ϊ:%d��\n",count_one_bits(n));
	system("pause");
	return 0;
}