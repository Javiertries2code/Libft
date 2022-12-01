#include<string.h>


 void ft_bzero(void *s, size_t n)
{
unsigned int i;
int *num2;

i = 1;
num2 = (int *)s;
while ( i++ <= n)
{
	*num2 = 0;
	num2++;
}
num2 = num2 -i;
s = num2;
}


// int main()
// {
//  int num[12] = {12,32,43,54,65,65,76,76,87,87,6,5};

// int i;

// ft_bzero(num, 3);

// for (i=0; i < 11; i++)
// {
// 	printf("%d\n", num[i]);
// }

// 	return (0);
// }