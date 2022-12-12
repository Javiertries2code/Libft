#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<string.h>


int main()
{
char *str = "Testing split funtion K separating riht in here";

split(str, 'K');
printf("\n%s\n", split(str, 'K')[0]);
printf("\n%s\n", split(str, 'K')[1]);


return (0);
}