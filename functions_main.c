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
	int i;

	if (s == NULL)
		s = "(null)";
	if (s[0] == '\0')
		return (0);

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);

	return (i);
}
/**
 * function_decimal - Prints a integer
 *
 *@d: Integer to Print
 *
 * Return: count of decimal
 */
int function_decimal(int d)
{
	int count = 0;
	long int temp;

	if (d < 0)
	{
		_putchar('-');
		temp = -(long int)d;
		count++;

	}
	else
		temp = d;
	if (d / 10 != 0)
		count += function_decimal((int)(temp / 10));
	_putchar(temp % 10 + '0');
	count++;
	return (count);

}

