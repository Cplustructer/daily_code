#include<stdio.h>
#include<stdlib.h>
//void test1(int arr[]) {    
//	printf("%d\n", sizeof(arr));//(2) 
//} 
//void test2(char ch[]) {    
//	printf("%d\n", sizeof(ch));//(4) 
//} 
int main()
{
	int a = 1; 
	int b = 2; 
	int c = (a>b, a = b + 10, a, b = a + 1);
	printf("%d",c);
	/*int a = -10; 
	int *p = NULL;   
	printf("%d\n", !2);
	printf("%d\n", !0);    
	a = -a;    
	printf("%d",a);
	p = &a;
*/
	/*int a = -10;
	int b = 20;
	int *ptr = NULL;
	printf("%d\n", !5);
	printf("%d\n",!0);
	a = -a;
	printf("%d\n", a);
	ptr = &a;
	printf("%d\n",*(ptr));
	double d = (double)b;
	printf("%.2lf\n",d);
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(ptr));
	int c = b++;
	printf("%d %d\n",c,b);*/
	/*int num1 = 1;    
	int num2 = 2;    
	printf("%d\n",num1 & num2);    
	printf("%d\n",num1 | num2);    
	printf("%d\n",num1 ^ num2);
*/
	/*double a = 4.5;
	int b = 3;
	int c = 5;
	printf("%d\n",c%b);
	printf("%.3lf\n",a/c);
	printf("%d\n",c/b);*/

	/*int a = 1;
	int b = 2;
	int c = (a > b, a = b + 10, a, b = a + 1);
	printf("%d\n",c);*/

	//int arr[10] = { 0 };   
	//char ch[10] = { 0 };   
	//printf("%d\n", sizeof(arr));//(1)    
	//printf("%d\n", sizeof(ch));//(3)    
	//test1(arr);    
	//test2(ch); 
	system("pause");
	return 0;
}