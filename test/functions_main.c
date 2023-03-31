#include <stdio.h>
#include "main.h"
/**
 * function_c - Prints char
 *
 * @c: char to Print
 *
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
 */
void function_s(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
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
/**
 * function_bslash - controller in case format is a backslash
 *
 * @c: char which is equal to the format character
 *
 *
 */
void function_bslash(char c)
{
	switch (c)
	{
		case '\\':
			_putchar('\\');
			break;
		case '\'':
			_putchar('\'');
			break;
		case '\"':
			_putchar('\"');
			break;
		case 'n':
			_putchar('\n');
			break;
		case 'r':
			_putchar('\r');
			break;
		case 't':
			_putchar('\t');
			break;
		case 'a':
			_putchar('\a');
			break;
		case 'b':
			_putchar('\b');
			break;
		case 'f':
			_putchar('\f');
			break;
		case 'v':
			_putchar('\v');
			break;
		default:
			_putchar('%');
			_putchar(c);
			break;
	}
}


