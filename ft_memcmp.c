#include<string.h>



       int ft_memcmp(const void *s1, const void *s2, size_t n)
	   	   {
 int count;
 unsigned int i;
char *str1;
char *str2;
unsigned int j;

i = 0;
count = 0;
str1 = (char *)s1;
str2 = (char *)s2;
j = n;

while (j > i)
{
if (str1[j -1] != '\0')
		count = count + 1;
if (str2[j - 1] != '\0')
		count = count-1;
j--;
printf("%d\n", j);
printf("%d\n", count);


}
return (count);
	
}

// int main()
// {
// const char *str1 = "h\0\0jjkolafgdsgasdf";
// const char *str2 = "maslarijh\0\0ufftoijoiy";
// unsigned int num = 14;

// printf("xx%d\n",ft_memcmp(str1, str2, num));
// 	return (0);
// }