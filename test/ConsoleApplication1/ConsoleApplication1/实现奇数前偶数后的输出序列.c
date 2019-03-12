#define _CRT_SECURE_NO_WARNINGS
#define N 10
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void print(int a[],int size)
{
	int start = 0;
	int end = size-1;
	while (start < end)
	{
		while (((a[start]) % 2 != 0))
		{
			start++;
		}
		while (((a[end]) % 2 == 0))
		{
			end--;
		}
		if (start < end)
		{
			a[start] = a[start]^a[end];
			a[end] = a[start]^a[end];
			a[start] = a[start]^a[end];
		}
	}
}

int main()
{
	int a[N];
	for (int i = 0; i < N; i++)
	{
		scanf("%d",&a[i]);
	}
	print(a,N);
	for (int i = 0; i < N; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n"); 
	system("pause");
	return 0;
}