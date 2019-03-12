#define N 10
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void readarry(int a[],int n);
void printfarry(int a[],int n);
void swap(int *p,int *q);

int main()
{
	int a[N], b[N],i,n;
	printf("please input the arrysize:");
	scanf("%d",&n);
	printf("please input the a:");
	readarry(a,n);
	printf("please input the b:");
	readarry(b,n);
	for (i = 0; i < n; i++)
	{
       swap(&a[i],&b[i]);
	}
	printfarry(a,n);
	printf("\n");
	printfarry(b, n);
	printf("\n");
	system("pause");
	return 0;
}
void readarry(int a[], int n){
   int i;
   for (i = 0; i < n; i++)
	 {
		scanf("%d",&a[i]);
	 }
}
void printfarry(int a[], int n){
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}
void swap(int *p, int*q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}