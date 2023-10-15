#include "main.h"
#include <stdarg.h>
#include <unistd.h>
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
		count += _putchar(va_arg(ap, int)); /* to print char */
		break;
	case 's':
		count += print_string(va_arg(ap, char *)); /* to print string */
		break;
	case '%':
		count += _putchar('%'); /* to print % */
		break;
	case 'd':
	case 'i':
		count += print_integer(va_arg(ap, int)); /* to print integer */
		break;
	default:
		break;
	}
	return (count);
}
/**
 * print_string - prints a string
 * @s: string to print
 * Return: number of characters printed
*/
int print_string(char *s)
{
	int i;

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}
