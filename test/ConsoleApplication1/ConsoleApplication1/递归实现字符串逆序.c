#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverse_string(char *s)
{
	char tmp = *s;
	int len = strlen(s);
	*s = *(s + len - 1);
	*(s + len - 1) = '\0';
	if (strlen(s) > 1){
		reverse_string(s+1);
	}
	*(s + len - 1) = tmp;
}
int main()
{
	char s[1024] = { 0 };
	printf("请输入要逆序的字符串:\n");
	gets(s);
	reverse_string(s);
	printf("逆序结果为:%s\n",s);
	system("pause");
	return 0;
}