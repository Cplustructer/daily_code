#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

void* sim_memcpy(void* str1,const void* str2,size_t n)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	char* ret = str1;
	while (n--)
	{
		*(char*)str1 = *(const char*)str2;
		++(char*)str1;
		++(char*)str2;
	}
	return ret;
}

void* sim_memmove(void* str1,void* str2,size_t n)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	char* s1 = (char*)str1;
	char* s2 = (char*)str2;
	void* ret = str1;
	if (s1<=s2||s2+n<=s1)
	{
		while (n--)
		{
			*s1++ = *s2++;
		}
	}
	else
	{
		while (n--)
		{
			*(s1 + n) = *(s2 + n);
		}
	}
	return ret;
}
int main()
{
	char str1[10] = "abcdefg";
	char str2[10] = "abcdefg";
	char str0[10] = { 0 };
	//sim_memcpy(str1 + 2, str1, 4); //有重叠的情况
	//sim_memcpy(str0, str2+3, 4); //无重叠的情况
	//printf("%s\n", str1 + 2);
	//printf("%s\n",str0);
	sim_memmove(str2 + 2, str2, 4); //有重叠的情况
	sim_memmove(str0,str1,3);
	printf("%s\n", str2 + 2);
	printf("%s\n",str0);
	system("pause");
	return 0;
}