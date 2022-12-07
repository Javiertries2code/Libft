#include<string.h>
//#include<stdio.h>

       int ft_strncmp(const char *s1, const char *s2, size_t n)
{
unsigned int i;

i = 0;
while ( i < n)
{
	if ((unsigned char)s1[i] != (unsigned char)s2[i])
		return (s1[i] - s2[i]);

	i++;
}
	
return (0);
}

// int main()
// {
// const char *str1 = "01234";
// const char *str2 = "06234";
// unsigned int num = 3;

// printf("%d\n",ft_strncmp(str1, str2, num));
// printf("\nxx%d\n",strncmp(str1, str2, num));

// 	return (0);
// }