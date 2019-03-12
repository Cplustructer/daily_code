#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void triangle(int n)
{
	int a[100][100];
	for (int i = 0; i < n; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;
	}
	for (int i = 2; i < n; i++)
	{
		for (int j = 1; j < i; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
}


int main()
{
	int n;
	printf("ÇëÊäÈëÐÐÊý£º\n");
	scanf("%d",&n);
	triangle(n);
	/*for (int A = 1; A <= 5; A++)
	{
		for (int B = 1; B <= 5; B++)
		{
			for (int C = 1; C <= 5; C++)
			{
				for (int D = 1; D <= 5; D++)
				{
					for (int E = 1; E <= 5; E++)
					{
						if (((B == 2 && A != 3) || (B != 2 && A == 3)) && ((B == 2 && E != 4) || (B != 2 && E == 4)) && ((C == 1 && D != 2) || (C != 1 && D == 2))
							&& ((C == 5 && D != 3) || (C != 5 && D == 3)) && ((E == 4 && A != 1) || (E != 4 && A == 1))&&(A*B*C*D*E==120))
							printf("A=%d , B=%d , C=%d , D=%d , E=%d\n",A,B,C,D,E);
					}
				}
			}
		}
	}*/
	/*char killer;
	for (killer = 'A'; killer <= 'D'; killer++)
	{
		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
		printf("killer = %c\n",killer);
	}*/

	system("pause");
	return 0;
}