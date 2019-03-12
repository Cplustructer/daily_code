#include<stdio.h>
#include<stdlib.h>

void print_arr(int(*arr)[5], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	/*int a = 10;
	int* p = &a;
	*p = 20;
	printf("%d\n",a);
	printf("%p\n",p);
	printf("%p\n",p+1);*/
	/*int num = 0x11223344;
	char* p = (char*)&num;
	printf("%x\n",*p);
	printf("%x\n",*(p+1));*/
	/*char* s = "abcde";
	char* p = s;
	while (*p!='\0')
	{
		p++;
	}
	printf("%d\n",p-s);*/
	/*int a[5] = {0};
	printf("%p\n",a);
	printf("%p\n", &a);
	printf("a+1 = %p\n ", a + 1);
	printf("&a+1 = %p\n",&a+1);*/
	int arr[3][5] = {1,2,3,4,5,6,7,8,9,10};
	print_arr(arr, 3, 5);
	system("pause");
	return 0;
}
