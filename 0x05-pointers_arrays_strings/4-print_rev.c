#include "main.h"

/**
 * print_rev - prints a string, in reverse,
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int alphabet = 0, index;

	while (s[index++])
		index++;

	for (index = alphabet - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
