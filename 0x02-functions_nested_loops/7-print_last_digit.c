#include "main.h"
/**
 * print_last_digit - Prints last digit of a number
 * @num: The number we are looking for
 *
 * Return: Value for the last digit
 */
int print_last_digit(int num)
{
	int last_digit = num % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
