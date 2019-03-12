#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int find_right(int a[][3], int row, int col,int x,int y, int key, int* p,int* q)
{
	if (x >= row || y < 0){
		return 0;
	}
	if (key == a[x][y]){
		*p = x;
		*q = y;
		return 1;
	}
	else if (key>a[x][y]){
		return find_right(a, row, col, ++x, y, key,p, q);
	}
	else {
		return find_right(a, row, col, x, --y, key, p, q);
	}
}
int main()
{
	int x = 0;
	int y = 0;
	int *p=&x;
	int *q=&y;
	int a[3][3] = {1,2,3,4,5,6,7,8,9};
	int key;
	scanf("%d",&key);
	if (find_right(a, 3, 3, 0, 2, key, p, q)){
		printf("%d %d\n",*p,*q);
	}
	else{
		printf("Œ¥’“µΩ£°\n");
	}
	system("pause");
	return 0;
}