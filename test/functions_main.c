#include <stdio.h>
#include "main.h"
/**
 * function_c - Prints char
 *
 * @c: char to Print
 * Return: counter i
 */
void function_c(int c)
{
	_putchar(c);
}
/**
 * function_s - Print a String
 *
 * @s: char pointer to Print
 *
 * Return: counter i
 */
int function_s(char *s)
{
	int i;

	if (s == NULL)
		return (-1);

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);

	return (i - 1);
}
/**
 * function_decimal - Prints a integer
 *
 *@d: Integer to Print
 *
 */
void function_decimal(int d)
{
	if (d < 0)
	{
		_putchar('-');
		d = -d;
	}
	if (d / 10 != 0)
		function_decimal(d / 10);
	_putchar(d % 10 + '0');
}

