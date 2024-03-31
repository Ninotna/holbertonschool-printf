#include "main.h"

/**
* print_string - Prints a string
* @args: list of arguments from which the string string to be printed
* Return: Number of characters printed
*/
int print_string(va_list args)
{
	char *str = va_arg(args, char *);

	int index;

	int count = 0;

	if (str == NULL)
	{
		str = "(null)";
	}
	for (index = 0; str[index]; index++)

	{
		_putchar(str[index]);
		count++;
	}
	return (count);
}
