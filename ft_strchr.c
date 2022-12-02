#include<string.h>
char *ft_strchr(char *s, int c)
{
int i;

i = 0;
while (s[i] || s[i-1])
{
	if (c == s[i])
		return  &s[i];
i++;
}

	return(&s[i]);
}

// int main()
// {
// 	char ch = '\n';
// 	printf("%c\n", *ft_strchr("hobla carabola", ch));
// 		printf("%c\n", *(ft_strchr("hola carabola", ch)+1));
// }