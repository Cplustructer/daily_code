#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define N 10

void find(int* s,int n)
{
	int ret = 0;
	int x = 0;
	int y = 0;
	int pos;
	for (int i = 0; i < N; i++)
	{
		ret ^= s[i];
	}
	for (int i = 0; i < 32; i++)
	{
		if (((ret >> i) & 1) == 1)
		{
			pos = i;
			break;
		}
	}
	for (int i = 0; i < N; i++)
	{
		if (((s[i] >> pos) & 1) == 1)
		{
			x ^= s[i];
		}
		else
		{
			y ^= s[i];
		}
	}
	printf("%d %d",x,y);
}

int main()
{

	int s[N];
	for (int i = 0; i < N; i++)
	{
		scanf("%d",&s[i]);
	}
	find(s,N);
	printf("\n");
	system("pause");
	return 0;
}

