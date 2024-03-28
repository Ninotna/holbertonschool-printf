#include "printf.h"

/**
* print_percent - function that prints a percent symbol
*
* Return: percent
*/
int print_percent(void)
{
	_putchar('%');
	return (1);
}

/**
* print_char - function that prints a char when c specifier is encountered
*
* Return: character
*/
int print_char(int character)
{
	_putchar((char)character);
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
* print_integer - function that prints an integer when i or d specifiers are encountered
*/
void print_integer(int n)
{
	char buffer[12];
	int index = 0;
	int negative = n < 0;

	if (negative)
	{
		n = -n;
	}

	while (n > 0)
	{
		buffer[index++] = n % 10 + '0';
		n /= 10;
	}

	// Ajout du signe négatif si nécessaire
	if (negative)
	{
		buffer[index++] = '-';
	}

	// Affichage des chiffres dans l'ordre inverse
	while (index--)
	{
		_putchar(buffer[index]);
	}
}
