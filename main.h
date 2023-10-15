#ifndef MIAN_H
#define MIAN_H
#include <stdarg.h>
/**
 * struct which_type - struct which_type
 * @type: type
 * @f: function
 */
struct which_type
{
	char type;
	int (*f)(va_list);
};

int _putchar(char c);
int _printf(const char *format, ...);

#endif /*MAIN_H*/
