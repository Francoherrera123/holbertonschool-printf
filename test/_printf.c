#include <stdarg.h>
#include "main.h"
/**
 * _printf - smart version of printf
 *
 *@format: contstant char
 */
int _printf(const char *format, ...)
{
	va_list args;

	if (format == NULL) /*Check that format is not null*/
		return (-1);
	va_start(args, format);
	main_controller((char *) format, args);
	va_end(args);
	return (0);
}
