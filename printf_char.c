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

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
		if (c >= 'a' && c <= 'z')
		{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
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

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
		else
		{
			return (0);
		}
}

/**
 * to_alpha - Change the string to uppercase
 * @s: String
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

