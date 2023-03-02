#include "main.h"
/**
* *_strcat- copy th des to src
*@dest: char
*@src: char
* Return: return new modern of string
**/
char *_strcat(char *dest, char *src)
{
char *s = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (s);
}
