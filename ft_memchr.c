#include<string.h>



       void ft_memchr(const void *s, int c, size_t n)
	   	   {
unsigned int i = 0;
char *str;;
unsigned char ch;
int snitch;

snitch = 0;
str = (char *)s;
ch = (char)c;

	while (i < n)
	{
		if (ch == str[i])
		{
			str = str + i;
			snitch++;
			i = n;
		}
		else
			i++;
			

	}
if (snitch == 0)
{
	str[0] = ('\0');
	
}


}

// int main()
// {
//  char *strdst = "x23456789101112";
//  char ch = 'j';
//  //char ch2 = '9';
// unsigned int num = 5;
// ft_memchr(strdst, ch, num);
// printf("%d\n", strdst[0]);
// //printf("%c\n", strdst[1]);
// //printf("%c\n", strdst[2]);
// //rintf("%c\n\n\n", strdst[5]);
// //memchr(strdst, ch2, num);                      
// //printf("%c\n", strdst[0]);
// //printf("%c\n", strdst[1]);
// //printf("%c\n", strdst[2]);
// //printf("%c\n", strdst[5]);
// 	return (0);
// }