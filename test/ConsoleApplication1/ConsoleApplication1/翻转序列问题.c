#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

unsigned int reverse_bits(unsigned int n)
{
	unsigned int sum = 0;
	for (int i = 1; i <= 32; i++)
	{
		sum += (n >> (i - 1) & 1)*pow(2,(32-i));
	}
	return sum;
}

unsigned int reverse_bits1(unsigned int n)
{
	unsigned int tmp = 0;
	for (int i = 0; i < 32; i++)
	{
		tmp <<= 1;
		tmp = tmp | ((n >> i) & 1);
	}
	return tmp;
}
int main()
{
	unsigned int n;
	printf("ÊäÈëÊı×Ö£º\n");
	scanf("%u",&n);
	printf("%u\n",reverse_bits(n));
	printf("%u\n",reverse_bits1(n));
	system("pause");
	return 0;
}