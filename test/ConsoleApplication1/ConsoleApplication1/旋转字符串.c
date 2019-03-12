#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void letf_rotate(char* str,int k)
{
	k %= strlen(str);
	while (k--)
	{
		char* cur = str;
		char tmp = *str;
		while (*(cur + 1))
		{
			*cur = *(cur + 1);
			cur++;
		}
		*cur = tmp;
	}
}

int main()
{
	int k;
	char str[1024];
	scanf("%s",str);
	scanf("%d",&k);
	letf_rotate(str, k);
	printf("%s\n",str);
	system("pause");
	return 0;
}