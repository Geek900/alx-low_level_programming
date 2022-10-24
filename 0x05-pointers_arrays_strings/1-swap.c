#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: the first integer to be swaped
 * @b: the second integer to be swaped
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int cons = *a;
	*a = *b;
	*b = cons;
}
