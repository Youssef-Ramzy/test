#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>
#include "main.h"
/**
 * _printf - prints anything to stdout
 * @format: list of argument types passed to the function
 * Return: number of characters printed
 */
int _pirntf(const char *format, ...)
{
	va_list ap;
	int count;

	va_start(ap, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
			count += Print_format(*(++format), ap);
		else
			count += _putchar(*format);
		format++;
	}
	va_end(ap);
	return (count);
}
