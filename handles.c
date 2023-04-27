#include "main.h"
/**
 * handles - function that act as a Format controller
 * @str: String format
 * @list: List of arguments
 * Return: Total size of arguments with the total size of the base string
 **/
int handles(const char *str, va_list list)
{
	int size, i, j;

	size = 0;
	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] == '%')
		{
			j = conversion_handling(str, list, &i);
			if (aux == -1)
				return (-1);

			size += j;
			continue;
		}
		_putchar(str[i]);
		size = size + 1;
	}
	return (size);
}

/**
 * conversion_handling - function that handles conversion specifiers
 * @str: String format
 * @list: List of arguments
 * @i: Iterates through the specifiers
 * Return: Size of the numbers of elements printed
 **/
int conversion_handling(const char *str, va_list list, int *i)
{
	int size, j, num_char;
	format formats[] = {
		{'s', print_string}, {'c', print_char}, {'d', print_integer},
		{'i', print_integer}, {'b', print_binary}, {'u', print_unsigned},
		{'o', print_octal}, {'x', print_hexadecimal_low},
		{'X', print_hexadecimal_upp}, {'p', print_pointer},
		{'r', print_rev_string}, {'R', print_rot}
	};

	*i = *i + 1;

	if (str[*i] == '\0')
		return (-1);

	if (str[*i] == '%')
	{
		_putchar('%');
		return (1);
	}

	num_char = sizeof(formats) / sizeof(formats[0]);
	for (size = j = 0; j < num_char; j++)
	{
		if (str[*i] == formats[j].type)
		{
			size = formats[j].f(list);
			return (size);
		}
	}

	_putchar('%'), _putchar(str[*i]);
	return (2);
}
