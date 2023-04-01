#include <stdarg.h>
#include "main.h"
/**
 * _printf - smart version of printf
 *
 *@format: contstant char
 *
 * Return: counter of characters printed
 */
int _printf(const char *format, ...)
{
	int lenght = 0;
	va_list args;

	if (format == NULL) /*Check that format is not null*/
		return (-1);
	va_start(args, format);
	lenght = main_controller((char *) format, args);
	va_end(args);
	return (lenght);
}
