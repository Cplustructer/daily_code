#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int find(int array[], int key, int right)
{
	int left, mid;
	left = 0;
	--right;
	mid = (left + right) / 2;
	while (left < right){
		if (key > array[mid]){
			left = mid + 1;
		}
		else if (key < array[mid]){
			right = mid - 1;
		}
		if (key == array[mid]){
			break;
		}
		mid = (left + right) / 2;
	}
	if (left <= right)
		return mid;
	else
		return -1;
	return mid;
}
int main()
{
	int arry[8] = { 3, 5, 7, 22, 33, 41, 45, 50 };
	int right = sizeof(arry) / sizeof(arry[0]);
	int num = 0, result = 0;
	printf("请输入你想查找的数：\n");
	scanf("%d", &num);
	result = find(arry, num, right);
	printf("%d\n", result);
	system("pause");
	return 0;

}