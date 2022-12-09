//#include<stdio.h>
int ft_atoi (const char *str)
{
int i;
int cifras;
int num;

i = 0;
cifras = 1;
num = 0;
while (str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            {
                num = (num * cifras) + (str[i] - '0');

                cifras =  10;

                if (cifras != 1 && !(str[i + 1] >= '0' && str[i + 1] <= '9'))
                    return num;
            }
      
    i++;
    }

return num;
}

// int main()
// {
//     printf ("%d", ft_atoi("34"));
// }