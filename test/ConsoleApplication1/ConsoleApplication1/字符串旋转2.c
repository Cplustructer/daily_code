#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int is_rotate(char* dest,char* src)
{
	strncat(dest,dest,strlen(dest));
	if(strstr(dest, src)!=NULL)
		return 1;
	else 
		return 0;
}

int main()
{
	char src[1024];
	char dest[1024];
	scanf("%s",src);
	scanf("%s",dest);
	printf("%d\n",is_rotate(dest,src));
	system("pause");
	return 0;
}