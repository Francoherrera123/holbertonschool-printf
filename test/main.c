#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("%s\n", "hello");
	_printf("%d\n", 123);
	_printf("%c\n", 'A');
	_printf("%%\n");
	_printf("hola\t [%r]\n");
	return (0);
}
