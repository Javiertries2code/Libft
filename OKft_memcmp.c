#include<string.h>
//#include<stdio.h>


       int ft_memcmp(const void *s1, const void *s2, size_t n)
	   	   {
 int count;
 unsigned int i;
char *str1;
char *str2;

i = 0;
count = 0;
str1 = (char *)s1;
str2 = (char *)s2;

while (i < n)
{
if (str1[i] != str2[i])
{
count = str1[i] - str2[i];
return (count);
}

i++;
}
return (count);
	
}

int main()
{
const char *str1 = "022344";
const char *str2 = "022344";
unsigned int num = 5;

printf("xx%d\n",ft_memcmp(str1, str2, num));
	return (0);
}