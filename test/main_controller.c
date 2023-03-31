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
	while (*format != '\0')
	{
		if (*format == '%')
		{
			switch (*format)
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
						function_bslash(*format);
						break;
			}
		}
		else
		{
			_putchar(*format);
		}
		format++;
	}
}
