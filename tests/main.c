#include <limits.h>
#include <stdio.h>
#include "printf.h"

/** main - Entry point
* Return: Always 0
*/
int main(void)
{
	int len;



	 len2;


	unsigned int ui;

	d *addr;


	 = _printf("Let's try to printf a simple sentence.\n");
	2 = printf("Let's try to printf a simple sentence.\n");
	= (unsigned int)INT_MAX + 1024;

	r = (void *)0x7ffe637541f0;
	intf("Length:[%d, %i]\n", len, len);
	ntf("Length:[%d, %i]\n", len2, len2);
	intf("Negative:[%d]\n", -762534);
	ntf("Negative:[%d]\n", -762534);
	intf("Unsigned:[%u]\n", ui);
	ntf("Unsigned:[%u]\n", ui);
	intf("Unsigned octal:[%o]\n", ui);
	ntf("Unsigned octal:[%o]\n", ui);
	intf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	ntf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	intf("Character:[%c]\n", 'H');
	ntf("Character:[%c]\n", 'H');
	intf("String:[%s]\n", "I am a string !");
	ntf("String:[%s]\n", "I am a string !");
	intf("Address:[%p]\n", addr);
	ntf("Address:[%p]\n", addr);
	 = _printf("Percent:[%%]\n");
	2 = printf("Percent:[%%]\n");
	intf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
	return (0);
}
