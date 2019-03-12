#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	int flag = 1;
	double k,sum=0;
	for (i = 1; i <= 100; i++)
	{
        k = flag*(1.0/ i);
		sum += k;
		flag = -flag;
	}
	printf("%lf\n", sum);
	system("pause");
	return 0;

}