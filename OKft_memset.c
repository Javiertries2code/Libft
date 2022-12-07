#include<stdio.h>
//#include<stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
unsigned char ch;
char *str2;
str2 = (char *)s;
ch = (unsigned char)c;

while (n > 0)
 {
	*str2 = (char)ch;
	n--;
	str2++;
 }
 return((void *)s);
}


// int main()
// {
//  char str[] = "SoloLosBobosBebenVinoBarato";

// unsigned char ch = '$';


// ft_memset(str + 5, (int)ch, 3);


// printf("%s\n", str);

// 	return (0);
// }