#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<string.h>

int main()
{
const void *str1;
const void *str2;
unsigned int num;

str1 = "0001";
str2 = "0004";
num = 4;
	printf("\n%d", memcmp(str1, str2, num));

	printf("\n%d", memcmp("a", "d", 2));

	return (0);
}