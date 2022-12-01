#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>


void *memset(void *str, int c, size_t n)
{
unsigned char ch;
int i;

i = 0;
ch = c;
while (i <=n)
 {
	str[i] = c;
	i++;
 }
}


int main()
{
 char str[6] = "SoloLos";

char ch = '$';

memset(str, ch, 3*sizeof(char));

printf("%s\n", str);

	return (0);
}