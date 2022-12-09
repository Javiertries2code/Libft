#include<string.h>

 size_t ft_strlcpy(char *dst, const char *src, size_t size)
	 {
	long unsigned int i;

	i = 0;
	while(src[i] && i < size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';


return (i);
}

// int main()
// {
// char *src= "0123456789";
// char dest[15];


// printf("\n%zu\n", ft_strlcpy(dest, src, 15));


// return(0);
// }