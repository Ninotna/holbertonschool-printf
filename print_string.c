
#include "main.h"

/**
* print_string - Prints a string
* @args: list of arguments from which the string is extracted and printed
* Return: Number of characters printed
*/
int print_string(va_list args)
{
	char *s = va_arg(args, char *);

	int i;

	int count = 0;

	if (s == NULL)
	{
		s = "(null)";
	}
	for (i = 0; s[i]; i++)

	{
		_putchar(s[i]);
		count++;
	}
	return (count);
}
