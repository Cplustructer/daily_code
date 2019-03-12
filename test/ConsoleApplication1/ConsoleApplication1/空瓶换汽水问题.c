#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。

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

