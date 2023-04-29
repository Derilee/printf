#include "main.h"
/**
 * printf_hexdec_high - Print a number in hexadecimal format
 * @list: Number to print
 *
 * Return: Length of the number
 **/

int printf_hexdec_high(va_list list)
{
	char *p_buff;
	int size;

	p_buff = int_ascii(va_arg(list, unsigned int), 16);
	p_buff = to_alpha(p_buff);

	size = print((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}

/**
 * _islower - Entry point
 *
 * @c: The variable
 *
 * Return: ALways(0) Success
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * *to_alpha - Change the string to uppercase
 * @c: String
 * Return: String uppercase
 **/
char *to_alpha(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (is_lower(c[i]))
		{
			c[i] = c[i] - 32;
		}
	}
	return (c);
}
