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
			if (j == -1)
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
		{'s', printf_str}, {'c', printf_char}, {'d', printf_int},
		{'i', printf_int}, {'b', printf_binary}, {'u', printf_unsigned},
		{'o', printf_octal}, {'x', printf_hexdec_low},
		{'X', printf_hexdec_up}, {'p', printf_ptr},
		{'r', printf_rev_str}, {'R', printf_rot}
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
