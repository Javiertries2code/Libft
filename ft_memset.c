#include<string.h>


void ft_memset(void *str, int c, size_t n)
{
unsigned char ch;
unsigned int i;
char *str2;
str2 = (char *)str;
i = 1;
ch = (unsigned char)c;
while (i <= n)
 {
	*str2 = (char)ch;
	i++;
	str2++;
 }
 str2 = str2 - i;
}


// int main()
// {
//  char str[] = "SoloLosBobosBebenVinoBarato";

// unsigned char ch = '$';


// ft_memset(str + 12, (int)ch, 3);

// printf("%s\n", str);

// 	return (0);
// }