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
	int len;

	_printf("%s\n", "hello");
	_printf("%d\n", 123);
	_printf("%c\n", 'A');
	_printf("%%\n");
	_printf("hola\t [%r]\n");
	len = _printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	_printf("Negative:[%d]\n", -762534);
	_printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	_printf("Len:[%d]\n", len);
	_printf("Unknown:[%r]\n");
	_printf("%s%r%1buelaaaaaaa%s%%%%% sali de %k");

	return (0);
}
