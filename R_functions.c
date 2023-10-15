#include "main.h"
#include <stdarg.h>
/**
 * print_format - prints a string
 * @specifier: char to check
 * @ap: va_list
 * Return: number of characters printed
 */
int print_format(char specifier, va_list ap)
{
	int count = 0; /* number of characters printed */

	switch (specifier)
	{
	case 'c':
		count += _putchar(va_arg(ap, int));
		break;
	case 's':
		count += print_string(va_arg(ap, char *));
		break;
	case '%':
		count += _putchar('%');
		break;
	case 'd':
	case 'i':
		count += print_integer(va_arg(ap, int));
		break;
	default:
		break;
	}
	return (count);
}
