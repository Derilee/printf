#include "main.h"
/**
 * printf_char - a function to print characters
 * @list: va_list
 * Return: 1
 */
int printf_char(va_list list)
{
	int ch;

	ch = va_arg(list, int);
	_putchar(ch);
	return (1);
}
