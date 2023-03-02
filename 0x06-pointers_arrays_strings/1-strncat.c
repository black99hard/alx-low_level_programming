#include "main.h"
/**
* *_strncat - copy th des to src
*@dest: char
*@src: char
*@n: int
* Return: return new modern of string
**/
char *_strncat(char *dest, char *src, int n)
{
char *s = *dest;
int i = 0;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
if (i == n)
{
break;
}
*dest = *src;
dest++;
src++;
i++;
}
return (s);
}
