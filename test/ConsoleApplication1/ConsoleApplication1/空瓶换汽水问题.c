#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��

int buttle(int money)
{
	int empty = money; 
	int total = money;

	while (empty >= 2)
	{
		total += empty / 2;
	    empty = empty/2+empty % 2;
	}
	return total;
}

int main()  
{
	int money;
	scanf("%d",&money);
	printf("%d\n",buttle(money));
	system("pause");
	return 0;
}

