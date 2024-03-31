#include "main.h"

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
