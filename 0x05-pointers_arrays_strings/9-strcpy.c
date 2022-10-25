#include "main.h"

/**
 * _strcpy -  copies the string pointed to by @src,
 * includinf the terminating null byte, to a buffer pointed to by @dest
 * @dest: destination to copy a string to
 * @src: source of string to copy
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{

	int length = 0;

	while (*(src + length) != '\0')
	{
		*(dest + length) = *(src + length);
		length++;
	}

	*(dest + length) = '\0';
	return (dest);
}
