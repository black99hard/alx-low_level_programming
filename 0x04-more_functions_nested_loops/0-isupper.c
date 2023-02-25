#include "main.h"

/**
 * _isupper - check the code.
 *@c: is to hold the char
 * Return: Always 0.
 */
int _isupper(int c)
{
int uchr;
int lchr;

for (uchr = 'a'; uchr <= 'z'; uchr++)
{
if (uchr == c)
{
return (1);
}

}

for (lchr = 'A'; lchr <= 'Z'; lchr++)
{
if (c == lchr)
{
return (0);

}

}

return (0);
}
