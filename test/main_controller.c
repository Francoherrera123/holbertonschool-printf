#include "main.h"
#include <stdarg.h>
/**
 * main_controller - controller of special characters like % or \
 *
 * @format: char of the printf
 * @args: argument list
 */
void main_controller(char *format, va_list args)
{
	int i = 0;

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 's':
						function_s(va_arg(args, char *));
						break;
				case 'c':
						function_c(va_arg(args, int));
						break;
				case '%':
						_putchar('%');
						break;
				case 'd':
						function_decimal(va_arg(args, int));
						break;
				case 'i':
						function_decimal(va_arg(args, int));
						break;
				default:
						_putchar('%');
						_putchar(format[i]);
						break;
			}
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
	}
}
