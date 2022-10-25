#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints an input number of elements
 * @a: the array of integers
 * @n: the number of elements to print
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
			continue;

		printf(",");
	}

	printf('\n');
}
