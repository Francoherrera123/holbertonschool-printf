#include <stdio.h>
#include <string.h>
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
	int i = 0, x;
	char *exit = "(null)";

	if (s == NULL)
	{
		if (strncmp(s + i, "NULL", 4u) == 0 && !s[i + 4])
		{
			for (x = 0; exit[x] != '\0'; x++)
				_putchar(exit[x]);
			return (x - 1);
		}
		else
			return (-1);
	}
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

