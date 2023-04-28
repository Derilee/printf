#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/** putchar and buffer */
int _putchar(char c);
int _buffer(char c);

int _printf(const char *format, ...);

/** handles the format specifies */
int handles(const char *str, va_list list);
int conversion_handling(const char *str, va_list list, int *i);

/** print tools */
int _strlen(const char *str);
int print(char *str);


/** print character */
int printf_char(va_list list);

/** print string */
int printf_str(va_list list);

/**
 * struct _format - struct
 * @type: format of
 * @f: the function
 */
typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;
#endif
