#include <main.h>
#include <stdio.h>
/**
 * _putchar - writes character c to stdout
 * @c: char to be printed
 * Return: on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
