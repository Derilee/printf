#include "main.h"

/**
 * printf_binary - Print a number in base 2
 * @list: Number to print in base 2
 *
 * Return: Length of the numbers in binary
 **/
int printf_binary(va_list list)
{
	char *p_buff;
	int size;

	p_buff = int_ascii(va_arg(list, unsigned int), 2);

	size = print(p_buff);

	return (size);
}
