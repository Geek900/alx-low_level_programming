#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet 10 times, in lower case
 */
void print_alphabet_x10(void)
{
	int counter = 0;
	char alphabet;

	while (counter <= 9; counter++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			_putchar(alphabet);
		_putchar('\n');
	}
}
