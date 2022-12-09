#include<string.h>

 size_t ft_strlcat(char *dst, const char *src, size_t size)
	 {
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while(dst[i])
		i++;
	while (src[j] && ((i + j) < size))
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';


return (i + j);
}

// int main()
// {
// char *src= "kola";
// char dest[15]= "Koks";


// printf("\n%zu\n", ft_strlcat(dest, src, 15));


// return(0);
// }