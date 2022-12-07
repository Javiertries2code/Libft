#include<string.h>
//#include<stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
	   	   {
unsigned int i = 1;
char *strdest;
char * strsrc;

strdest = (char *)dest;
strsrc = (char *)src;
	while (n >= i)
	{
	strdest[n-1] = strsrc[n-1];
	n--;
	}
	return ((void *)dest);
}

// int main()
// {
//  char strdst[] = "holafgdsgasdf";
//  char strsrc[] = "xyzw";
//  char strtest[] = "lklklklk";
// unsigned int num = 3;
// ft_memcpy(strdst, strsrc, num);
// printf("%c\n", strdst[0]);
// printf("%c\n", strdst[1]);
// printf("%c\n", strdst[2]);
// printf("%c\n\n\n", strdst[5]);
// memcpy(strdst, strtest, 4);                      
// printf("%c\n", strdst[0]);
// printf("%c\n", strdst[1]);
// printf("%c\n", strdst[2]);
// printf("%c\n", strdst[5]);
// 	return (0);
// }