#include "main.h"

/**
 * int_ascii - function to convert an int to ascii character
 * @num: number variable
 * @b: base variable
 * Return: pointer to the ascii character
 */
char *int_ascii(long int num, int b)
{
	static char *arr = "0123456789abcdef";
	static char count[50];
	char ascii = 0;
	unsigned long i = num;
	char *ptr;

	if (num < 0)
	{
		i = -num;
		ascii = '-';
	}
	ptr = &count[49];
	*ptr = '\0';

	do {
		*--ptr = arr[i % b];
		i /= b;
	} while (i != 0);

	if (ascii)
	{
		*--ptr = ascii;
	}
	return (ptr);
}
