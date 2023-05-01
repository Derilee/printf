#include "main.h"

/**
 * printf_unsigned - Print a unsigned int
 * @list: Number to print
 *
 * Return: Length of the number
 **/
int printf_unsigned(va_list list)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(list, unsigned int), 10);

	size = print((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}
