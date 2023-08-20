#include "main.h"

/**
 * print_c - print the format c.
 * @c: Character to be printed.
 * Return: The len of character printed.
 */
int print_c(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_s - print the format s
 * @s: The format to be printed.
 * Return: Lenght of the character printed.
 */
int print_s(char *s)
{
	int i, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len += write(1, &s[i], 1);
	}
	return (len);
}
