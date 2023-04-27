#include "main.h"
/**
 * printf_string - function to Print a string
 * @list: list.
 * Return: length of the string
 */
int printf_string(va_list list)
{
	char *p;
	int len;

	p = va_arg(list, char*);
	len = print((p != NULL) ? p : "(null)");
	return (len);
}
