#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void reverse_string(char* start,char* end)
{
	while (start < end)
	{
		char tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}

int s_strlen(char* str)
{
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}

void reverse(char* str)
{
	//整体逆转
	char* start = str;
	char* end = str + s_strlen(str) - 1;
	reverse_string(start,end);
	//子串逆转
	char* cur = str;   //定义一个指针代表现在的指向
	while (*cur)
	{
		//子串的起点
		char* s_start = cur;
		//寻找尾点
		while ((*cur != ' ') && (*cur != '\0'))
		{
			cur++;
		}
		//逆转子串
		reverse_string(s_start, cur - 1);
		//寻找下一个子串起点
		while (*cur == ' ')
		{
			cur++;
		}
	}
}

int main()
{
	printf("请输入字符串:\n");
	char s[1024];
	gets(s);
	reverse(s);
	printf("%s\n",s);
	system("pause");
	return 0;
}