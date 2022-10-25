#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int j = 0;

	while (s[i] != '\n')
		i++;
	for (i = i - 1; i > 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
