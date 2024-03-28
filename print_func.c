#include "printf.h"

/**
* print_percent - function that prints a percent symbol
* @p: pointer
* Return: percent
*/
int print_percent(va_list __attribute__((unused)) p)
{
	_putchar('%');
	return (1);
}

/**
* print_char - function that prints a char when c specifier is encountered
* @p: ff
* Return: character
*/
int print_char(va_list p)
{

	int ch = (char)va_arg(p, int);

	_putchar(ch);
	return (1);
}

/**
* print_string - function that prints a string when s specifier is encountered
*
* @args: the arguments passed to the funtion
*
* Return: return the number of characters in string
*/
int print_string(va_list args)
{
	int string_count, index;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	string_count = _strlen(str);

	for (index = 0; index < string_count; index++)
	{
		_putchar(str[index]);
	}
	return (string_count);
}

/**
* print_int_dec - function
* that prints an integer when i or d specifiers are encountered
* @p: int
* Return: 0;
*/
int print_int_dec(va_list p)
{
	int i = 0;
	int n = va_arg(p, int);

	for (; i < n; i++)
	{


		if (n < 0)
		{
			putchar('-');
			n = -n;
		}
		if (n == 0)
		{
			putchar('0');
		} else
		{
			while (n != 0)
			{
				putchar('0' + n % 10);
				n /= 10;
			}
		}
	}
	return (0);
}
