#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/** main prototype */
int _printf(const char *format, ...);

/** putchar */
int _putchar(char);
int _buffer(char);

/** handles the format specifies */
int format_controller(const char *, va_list);
int conversion_handling(const char *, va_list, int *i);

/** print tools */
int _strlen(const char *);
int print(char *);

/** print character */
int printf_char(va_list);

/** print string */
int printf_str(va_list);
int printf_rev_str(va_list);
int _strcmp(char *s1, char *s2);
int is_lower(char c);
int is_alpha(char c);
char *to_alpha(char *c);

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

/** convert an int to ascii character */
char *itoa(long int, int);

/**
 * struct _format - struct datatype
 * @type: format of the struct data type
 * @f: the function
 */
typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;


#endif
