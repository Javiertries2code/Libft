
#include<string.h>

void *ft_calloc(size_t count, size_t size)
	{
void *ptr;

if (!size)
	return (NULL);
ptr = (void *)malloc(count * size);
ft_bzero(ptr);

return (ptr, count);	
	}