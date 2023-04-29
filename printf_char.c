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

/**
 * _isalpha - Check for uppper and lower case
 * @c:  The variable used for int
 * Return: Always (0) success
 */
int _isalpha(int c)
{

	return (c >= 'A' && c <= 'Z');
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

