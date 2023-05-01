#include "main.h"

/**
 * printf_hexdec_low - Print a number in hexadecimal format
 * @list: Number to print
 *
 * Return: Length of the number
 **/
int printf_hexdec_low(va_list list)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(list, unsigned int), 16);

	size = print((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}
