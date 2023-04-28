#include "main.h"
/**
 * _strlen - function to calculate the length of a string
 * @str: String
 * Return: Length of the string
 **/
int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;

	return (i);
}

/**
 * print - function to print characters
 * @str: string.
 * Return: length of the string
 */

int print(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		_putchar(str[i]);
	return (i);
}

