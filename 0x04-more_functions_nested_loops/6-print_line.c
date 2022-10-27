#include "main.h"

/**
 *  print_line - Draws a straight line using the character _.
 *  @n: The number of _ characters to be printed.
 */
void print_line(int n)
{
	int mac;

	if (n > 0)
	{
		for (mac = 0; mac < n; mac++)
			_putchar('_');
	}

	_putchar('\n');
}
