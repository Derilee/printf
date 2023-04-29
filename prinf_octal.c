#include "main.h"

/**
 * printf_octal - Print a unsigned octal
 * @list: Number to print
 *
 * Return: Length of the number
 **/
int printf_octal(va_list list)
{
	char *p_buff;
	int size;

	p_buff = int_ascii(va_arg(list, unsigned int), 8);

	size = print((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}
