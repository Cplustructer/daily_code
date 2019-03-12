#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int  main()
{
	int i, j, n = 0;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j < sqrt(i); j++)
		{
			if (i%j == 0){
				break;
			}
		}
		if (j>sqrt(i))
		{
			printf("%d\t",i);
		}
	}
	printf("\n");
	system("pause");
	return 0;
}