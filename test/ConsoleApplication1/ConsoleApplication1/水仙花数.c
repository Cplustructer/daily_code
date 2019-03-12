#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int i,a,b,c=0;
	for (i = 100; i <= 999; i++)
	{
		a = i / 100;
		b = i / 10 % 10;
		c = i % 10;
		if (pow(a, 3) + pow(b, 3) + pow(c, 3) == i)
		{
			printf("%d\t",i);
		}
	}
	system("pause");
	return 0;
}