#include "main.h"
/**
 * switch_controller - diferent cases of the character after %
 *
 * @format: char of the printf
 * @args: argument list
 * @count: counter of main_controller
 */
void switch_controller(char format, va_list args, int *count)
{
	int check;

	switch (format)
	{
		case 's':
			check = function_s(va_arg(args, char *));
			if (check == -1)
				*count = -1;
			else
				*count += check;
			break;
		case 'c':
			function_c(va_arg(args, int));
			(*count)++;
			break;
		case '%':
			_putchar('%');
			(*count)++;
			break;
		case 'd':
			check = function_decimal(va_arg(args, int));
			(*count) += check;
			break;
		case 'i':
			check = function_decimal(va_arg(args, int));
			(*count) += check;
			break;
		default:
			_putchar('%');
			(*count)++;
			_putchar(format);
			(*count)++;
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
	int i = 0, count = 0;

	if (format == NULL)
		return (-1);
	if (format[i] == '\0')
		return (count);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
			{
				_putchar('%');
				return (count +1);
			}
			switch_controller(format[i], args, &count);
			if (count == -1)
				return (-1);
		} else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	return (count);
}
