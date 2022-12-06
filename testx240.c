#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<string.h>



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

while (n > i)
{
// No se, intento que sume el valor de los caracteres a ver si es eso o algo

 	// if (str1[n -1])
	// 	count = count + (int)str1(n-1);
	// if (str2[n - 1])
	// 	count = count + (int)str2(n-1);
n--;
printf("%d\n", (int)n);
printf("%d\n", count);


}
return (count);
	
}

int main()
{
const char *str1 = "8 dsa\0fdsa\0dfsfds	";
const char *str2 = "h\0d\0\0ja\0fgd\0gasdf";
unsigned int num = 15;

printf("xx%d\n",ft_memcmp(str1, str2, num));
printf("YY%d\n",memcmp(str1, str2, num));


	return (0);
}