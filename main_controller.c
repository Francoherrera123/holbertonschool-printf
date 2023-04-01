#include "main.h"
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
/**
 * main_controller - controller of special characters like % or \
 *
 * @format: char of the printf
 * @args: argument list
 *
 * Return: counter i
 */
int main_controller(char *format, va_list args)
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
	return (i);
}