#include "main.h"
/**
 * printf_string - Print string
 * @list: list.
 * Return: String length.
 */
int printf_string(va_list list)
{
	char *p;
	int len;

	p = va_arg(list, char*);
	len = print((p != NULL) ? p : "(null)");
	return (len);
}
