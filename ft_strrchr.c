
char *ft_strchr(char *str, int c)
{
int i;
int lenght;

lenght = 0;
while (str[lenght])
	{

		lenght++;
	}

i = lenght -1;

while (str[i] && i >= 0)
	{

		if (c == str[i])
			return  &str[i];
	i--;

	}

return (&str[lenght]);
}

