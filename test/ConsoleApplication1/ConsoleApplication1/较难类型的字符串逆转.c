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
	//������ת
	char* start = str;
	char* end = str + s_strlen(str) - 1;
	reverse_string(start,end);
	//�Ӵ���ת
	char* cur = str;   //����һ��ָ��������ڵ�ָ��
	while (*cur)
	{
		//�Ӵ������
		char* s_start = cur;
		//Ѱ��β��
		while ((*cur != ' ') && (*cur != '\0'))
		{
			cur++;
		}
		//��ת�Ӵ�
		reverse_string(s_start, cur - 1);
		//Ѱ����һ���Ӵ����
		while (*cur == ' ')
		{
			cur++;
		}
	}
}

int main()
{
	printf("�������ַ���:\n");
	char s[1024];
	gets(s);
	reverse(s);
	printf("%s\n",s);
	system("pause");
	return 0;
}