#include "main.h"
/**
 * _printf - function that produces output according to a format
 * @format: Is a character string
 *		It is composed of zero or more directives
 * Return: The number of characters printed (excluding
 *		the null byte used to end output to strings)
 **/
int _printf(const char *format, ...)
{
	int i;
	va_list arr;

	if (format == NULL)
		return (-1);

	i = _strlen(format);
	if (i <= 0)
		return (0);

	va_start(arr, format);
	i = format_controller(format, arr);

	_putchar(-1);
	va_end(arr);
	return (i);
}
