#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b;
	scanf_s("%d %d",&a,&b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d %d\n",a,b);
	system("pause");
	return 0;
}
