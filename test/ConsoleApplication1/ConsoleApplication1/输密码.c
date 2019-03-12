#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
int main()
{
	char MM = "201606060318";
	char password;
	int n = 3;
	while (n--){
		printf("你还有 %d 次输入密码的机会，请输入密码：",n);
        scanf("%s",password);
		if (strcmp(password, MM)){
		    
		}
	}
	system("pause");
	return 0;
}