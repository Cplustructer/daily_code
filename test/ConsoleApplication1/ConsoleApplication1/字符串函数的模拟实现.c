#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

size_t sim_strlen(const char* str1)
{
	assert(str1 != NULL);
	size_t size = 0;
	while (str1[size] != '\0')
	{
		++size;
	}
	return size;
}

char* sim_strcpy(char* str1,const char* str2)
{
	char* ret = str1;
	assert(str1 != NULL);
	assert(str2 != NULL);
	while ((*str1++ = *str2++))
	{
		;
	}
	return ret;
}

char* sim_strcat(char* str1,char* str2)
{
	char* ret = str1;
	assert(str1 != NULL);
	assert(str2 != NULL);
	while (*str1)
	{
		str1++;
	}
	while ((*str1++ = *str2++))
	{
		;
	}
	return ret;
}

char* sim_strstr(const char* str1, const char* str2)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	char* cp = (char*)str1;
	char* substr = (char*)str2;
	char* s1 = NULL;

	if (*str2 == '\0')
		return NULL;

	while (*cp)
	{
		s1 = cp;
		substr = str2;
		while (*s1 && *substr && (*s1 == *substr))
		{
			s1++;
			substr++;
		}
		if (*substr == '\0')
			return cp;
		cp++;
	}
}

int sim_strcmp(const char* str1, const char* str2)
{
	int ret = 0;
	assert(str1 != NULL);
	assert(str2 != NULL);
	while (!(ret = (*str1 - *str2)) && *str2)
		++str1,++str2;
	if (ret >0)
		ret = 1;
	else if (ret < 0)
		ret = -1;
	return ret;
}

char* sim_strchr(const char* str1, int ch)
{
	assert(str1!=NULL);
	while (*str1)
	{
		if (ch == *str1)
		{
			return str1; 
		}
		str1++;
	}
}

char* sim_strncpy(char* str1, const char* str2,size_t n)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	char* ret = str1;
	while (n--)
	{
		*str1++ = *str2++;
	}
	return ret;
}

char* sim_strncat(char* str1,const char* str2,size_t n)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	char* ret = str1;
	while (*str1)
	{
		str1++;
	}
	while (n--)
	{
		*str1++ = *str2++;
	}
	*str1 = '\0';
	return ret;
}

int sim_strncmp(const char* str1, const char* str2, size_t n)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	while (*str1 == *str2)
	{
		str1++;
		str2++;
		n--;
	}
	return (*str1 - *str2);
}

int main()
{
	int n;
	char str1[1024];
    char str2[1024];
	scanf("%s",str1);
	//int ch = 'b';
	//char* str1 = "abcde";
	scanf("%s",str2);
	scanf("%d", &n);
	//printf("%s\n",sim_strcat(str1,str2));
	//printf("%d",sim_strlen(str1));
	//printf("%s\n",sim_strcpy(str1,str2));
	//printf("%d\n",sim_strcmp(str1,str2));
	//printf("%s\n", sim_strstr(str1, str2));
	//printf("%s\n",sim_strchr(str1,ch));
	//printf("%s\n",sim_strncpy(str1,str2,n));
	//printf("%s\n",sim_strncat(str1,str2,n));
	printf("%d\n",sim_strncmp(str1,str2,n));
	system("pause");
	return 0;
}