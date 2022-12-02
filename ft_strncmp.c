#include<string.h>


       int ft_strncmp(const char *s1, const char *s2, size_t n)
{
unsigned int i;

i = 0;
while ( s1[i] && s2[i] && i < n)
	i++;
if (s1[i] && !s2[i])
		return (1);
if (s2[i] && !s1[i])
		return (-1);
else 
return (0);

}

// int main()
// {
// const char *str1 = "holafgdsgasdf";
// const char *str2 = "maslar";
// unsigned int num = 8;

// printf("%d\n",ft_strncmp(str1, str2, num));
// 	return (0);
// }