#include "printf.h"

/**
 * specifier - looks for the format specifier and call prototypes
 * @i: member i
 * @format: string from _printf
 * @list: the list of arguments
 * Return: length of output
 */

int specifier(int *i, const char *format, va_list list)
{
	int len2 = 0, k = *i, l = 0, m = 0;

	form_spec_t spec[] = {
		{"s", print_string},
		{"c", print_char},
		{"d", print_dec_int},
		{"i", print_dec_int},
		{"%", print_pcent},
		{NULL, NULL},
	};

	int size = sizeof(spec) / sizeof(form_spec_t) - 1;

	while (l < size)
	{
		if (*(spec[l].specifier) == format[k + 1])
		{
			len2 += spec[l].print_func(list);
			*i += 1;
		}
		else
		{
			m++;
		}
		l++;
	}
	if (m == size)
	{
		len2 += _putchar(format[k]);
	}
	return (len2);
}

/**
 * print_char - print character
 * @p: argument pointer
 * Return: 1
 */

int print_char(va_list p)
{
	int ch = (char)va_arg(p, int);

	_putchar(ch);

	return (1);
}

/**
 * print_string - print string
 * @p: argument pointer
 * Return: 1
 */

int print_string(va_list p)
{
	int i = 0;
	char *s;

	s = va_arg(p, char*);

	if (s == NULL)
	{
		s = "(null)";
	}

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}

/**
 * print_dec_int - print decimal and integer
 * @arg: first member
 * Return: length of output
 */

int print_dec_int(va_list arg)
{
	unsigned int i, j, k;

	int n = va_arg(arg, int), len2 = 0;

	if (n < 0)
	{
		len2 += _putchar('-');
		i = n * -1;
	}
	else
	{
		i = n;
	}
	j = 1;
	k = i;
	while (k > 9)
	{
		j *= 10;
		k /= 10;
	}
	for (; j >= 1; j /= 10)
	{
		len2 += _putchar(((i / j) % 10) + '0');
	}
	return (len2);
}

/**
 * print_pcent - print percent
 * @p: argument pointer
 * Return: 1
 */
int print_pcent(va_list __attribute__((unused)) p)
{
	_putchar('%');
	return (1);
}
