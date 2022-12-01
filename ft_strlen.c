
#include<stdio.h>
size_t  ft_strlen(const char *s)
{
   int i;
   i = 0;
   while(s[i])
        i++;
    return (i);
}

int main()
{
int num;
num = (int)ft_strlen("hola me llamo dddd");

   printf("%d\n",  num);
    return 0;
}