#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//���Ľ��������˳���޹�
//��Ӧλ��������Ͷ�Ӧλ��������1�ĸ����йأ�ż����1�����Ϊ0��������1�����Ϊ1

int get_once(int a[])
{
	int ret = 0;
	for (int i = 0; i < 11; i++)
	{
		ret ^= a[i];
	}
	return ret;
}
int main()
{
	int a[11];
	printf("������11��������\n");
	for (int i = 0; i < 11; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("%d\n",get_once(a));
	system("pause");
	return 0;
}
