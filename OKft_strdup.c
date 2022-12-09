#include<string.h>

       char *ft_strdup(const char *s)
	   {

		char *str;
		
		str = (char *)malloc(sizeof(s));
		ft_trcpy(str, s);
		return (str);
	   }



int main()
{
 char *str = "Hola";
char *ptr;

ptr = ft_strdup(str);
printf("%s\n", (char *)ptr);

return (0);
}