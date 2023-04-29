#include "main.h"
/**
 * format_controller - function that act as a Format controller
 * @ch: String format
 * @list: List of arguments
 * Return: Total size of arguments with the total size of the base string
 **/
int format_controller(const char *ch, va_list list)
{
	int total, i, j;

	total = 0;
	for (i = 0; ch[i] != 0; i++)
	{
		if (ch[i] == '%')
		{
			j = conversion_handling(ch, list, &i);
			if (j == -1)
				return (-1);

			total += j;
			continue;
		}
		_putchar(ch[i]);
		total = total + 1;
	}
	return (total);
}

/**
 * conversion_handling - function that handles conversion specifiers
 * @ch: character/string format
 * @list: List of arguments
 * @i: Iterates through the specifiers
 * Return: Size of the numbers of elements printed
 **/
int conversion_handling(const char *ch, va_list list, int *i)
{
	int size, j, num_char;
	format formats[] = {
		{'s', printf_str}, {'c', printf_char}, {'d', printf_int},
		{'i', printf_int}, {'b', printf_binary}, {'u', printf_unsigned},
		{'o', printf_octal}, {'x', printf_hexdec_low},
		{'X', printf_hexdec_high}, {'p', printf_ptr},
		{'r', printf_rev_str}, {'R', printf_rot}
	};

	*i = *i + 1;

	if (ch[*i] == '\0')
	{
		return (-1);
	}
	if (ch[*i] == '%')
	{
		_putchar('%');
		return (1);
	}

	num_char = sizeof(formats) / sizeof(formats[0]);
	for (size = j = 0; j < num_char; j++)
	{
		if (ch[*i] == formats[j].type)
		{
			size = formats[j].f(list);
			return (size);
		}
	}

	_putchar('%'), _putchar(ch[*i]);
	return (2);
}
