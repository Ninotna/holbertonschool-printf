#include "printf.h"

/**
* print_int_dec - function that prints an integer when
* i or d specifiers are encountered
*
* @list: variable argument list containing the integer to print
*
* Return: number of characters printed
*/

int print_int_dec(va_list list)
{
	int number = va_arg(list, int);
	int count = 0;
	char buffer[64];
	int index = 0;

	/* Checks if the number is negative */
	if (number < 0)
	{
		_putchar('-');	  /* Prints the negative sign */
		number = -number; /* Converts the number to its absolute value */
		count++;		  /* Increments the count for the sign */
	}

	/* Checks if number is zero */
	if (number == 0)
	{
		_putchar('0');
		return (1);
	}

	while (number > 0)
	{
		int digit = number % 10; /* Extracts the last digit of the number */

		/* Stores digit converted to a char in buffer */
		buffer[index++] = digit + '0';
		number /= 10; /* Divides the number by 10 to move to the next digit */
	}

	/* Prints the digits stored in the buffer in reverse order */
	while (index > 0)
	{
		_putchar(buffer[--index]); /* Prints the digit stored in the buffer */
		count++;				   /* Increments the character count */
	}
	return (count); /* Returns the total number of characters printed */
}
