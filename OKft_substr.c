#include<string.h>

       char *ft_substr(char const *s, unsigned int start, size_t len)
	   {
		unsigned int i;
		char *str;
		
		i = 0;
		str = (char *)malloc(len * sizeof(char));
		if (!sizeof(str))
			return(NULL);
		while (i < len)
			{
			str[i] = s[start + i];
		
			i++;
			}
			//printf("%s\n", str);

		return (str);
	   }



// int main()
// {
//  char *str = "Hola carabola string";
// char *ptr;

// ptr = ft_substr(str, 5, 8);

// printf("%s\n", ptr);

// return (0);
// }