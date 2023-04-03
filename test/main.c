#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0
 *     */
int main(void)
{
	int a, b;

	a = _printf("Hola %%%%%s %d\n", "Hola2", 3);
	b = printf("Hola %%%%%s %d\n", "Hola2", 3);

	_printf("\n\n");

	a = _printf("Hola, %s %s", "que tal?", NULL);
	b = printf("Hola, %s %s", "que tal?", NULL);

	_printf("%d, %d", a, b);
	return (0);
}
