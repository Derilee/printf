#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/** main prototype */
int _printf(const char *format, ...);

/** putchar and buffer */
int _putchar(char c);
int _buffer(char c);

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
int printf_rev_str(va_list);

/** print integers */
int printf_int(va_list);

/** print binary */
int printf_binary(va_list);

/** print octal values */
int printf_octal(va_list);

/** print unsigned */
int printf_unsigned(va_list);

/** print hexadecimal */
int printf_hexdec_low(va_list);
int printf_hexdec_high(va_list);

/** print pointers */
int printf_ptr(va_list);

/** print rot */
int printf_rot(va_list);

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
