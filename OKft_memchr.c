#include<string.h>
//#include<stdio.h>


       void *ft_memchr(const void *s, int c, size_t n)
	   	   {
unsigned int i = 0;
char *str;;
unsigned char ch;

str = (char *)s;
ch = (char)c;

while (i < n)
	{
		if (ch == str[i])
		{
			return((void *)&str[i]);
		}
		else
			i++;
		}
	return (NULL);
}

// int main()
// {
//  char *strdst = "x23456789101112";
//  char ch = 's';
//  char ch2 = 's';
// unsigned int num = 10;

// printf("despuesFT%p\n", ft_memchr(strdst, ch, num));
// printf("despuesFT%p\n", memchr(strdst, ch2, num));
// 	return (0);
// }