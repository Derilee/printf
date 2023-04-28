#include "main.h"
#include <unistd.h>
/**
* _putchar - writes the character c to stdout
* @c: The character to print
* Return: On sucess 1.
* On error, -1 is returned, and error is set appropriately.
*
* Description - buffer is a temporary storage to hold the character to print
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _buffer - stores the character to print
 * @c: The character to print
 * Return: on success 1
 *
int _buffer(char )
{
	static char tmpstorage[1024];
	static int i;

	if (c == -1 || i == 1024)
	{
		write(1, tmpstorage, i);
		i = 0;
	}
	if (c != -1)
		tmpstorage[i++] = c;
	return (1);
} */
