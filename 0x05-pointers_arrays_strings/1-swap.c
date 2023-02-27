#include "main.h"
/*more header*/

/**
*swap_int - to update the coming pointers
*@a: a coming pointer
*@b: a coming pointer
*Return: void
**/
void  swap_int(int *a, int *b)
{
	int swapedA = *b;
	int swapedB = *a;
	*a = swapedA;
	*b = swapedB;
}
