#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void guess(int AI){
	int num = 0;
	printf("please input the num:\n");
	while (1){
		scanf("%d",&num);
		if (num > AI){
			printf("大了，请重新输入：\n");
		}
		else if (num < AI){
			printf("小了，请重新输入：\n");
		}
		else if (num == AI){
			printf("恭喜正确！");
			break;
		}
	}
}
int main()
{
	int AI,c;
	printf("let's begin:\n");
	do{
		srand((unsigned)time(NULL));
		AI = rand()%11;
		printf("1.开始游戏  0.退出游戏！  请做选择：\n");
        scanf("%d",&c);
		if (c == 1){
		   guess(AI);
		}
	}while(c!=0);
	system("pause");
	return 0;
}