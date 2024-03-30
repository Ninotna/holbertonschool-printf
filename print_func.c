#include "printf.h"

/**
 * _putchar - Helper function to write a character to stdout
 * @c: character to write
 *
 * Return: On success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_int - Prints an integer
 * @args: list of arguments from which the integer is extracted and printed
 */
void print_int(va_list args)
{
	int n = va_arg(args, int);
	char buffer[12];

	int_to_str(n, buffer);
	for (int i = 0; buffer[i]; i++)
	{
		my_putchar(buffer[i]);
	}
}

/**
 * print_char - Prints a character
 * @args: list of arguments from which the character is extracted and printed
 */
void print_char(va_list args)
{
	int c = va_arg(args, int);

	my_putchar(c);
}

/**
 * print_string - Prints a string
 * @args: list of arguments from which the string is extracted and printed
 */
void print_string(va_list args)
{
	char *s = va_arg(args, char *);

	for (int i = 0; s[i]; i++)
	{
		my_putchar(s[i]);
	}
}

/**
 * int_to_str - Converts an integer to a string
 * @n: the integer to convert
 * @str: the string to store the converted integer
 */
void int_to_str(int n, char *str)
{
	sprintf(str, "%d", n);
}
