#include "main.h"
/**
 * printf_str - function to Print a string
 * @list: list.
 * Return: length of the string
 */
int printf_str(va_list list)
{
	char *p;
	int len;

	p = va_arg(list, char*);
	len = print((p != NULL) ? p : "(null)");
	return (len);
}
