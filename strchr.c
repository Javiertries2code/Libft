
char *ft_strchr(char *str, int c)
{
int i;

i = 0;
while (str[i])
{
	if (c == str[i])
		return  &str[i];
i++;
}

	return(&str[i]);
}