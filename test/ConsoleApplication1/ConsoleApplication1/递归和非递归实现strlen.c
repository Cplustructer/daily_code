#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//int string_strlen(char* s)
//{
//	int cnt=0;
//	for (int i = 0;s[i]!='\0'; i++){
//			cnt++;
//
//	}
//	return cnt;
//}

int string_strlen1(char* s)
{
	if (*s == '\0'){
		return 0;
	}
	else{
		return string_strlen1(++s) + 1;
	}
}
int main()
{
	char  s[1024];
	printf("�������ַ���:\n");
	gets(s);
	//printf("�ַ�������Ϊ��%d", string_strlen(s));
	printf("�ַ�������Ϊ��%d", string_strlen1(s));
	system("pause");
	return 0;
}
