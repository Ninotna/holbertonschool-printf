#include <stdio.h>
#include <stdlib.h>
#include "../main.h"

int main(void)
{
	int len, len2;

	// Capture the length returned by your _printf
	len = _printf("%");
	fflush(stdout);  // Flush to ensure the output is printed before proceeding

	// Capture the length returned by the standard printf
	len2 = printf("%");
	fflush(stdout);  // Flush to ensure the output is printed before proceeding

	// Print the lengths obtained from _printf and printf
	printf("\n_len: %d\n", len);
	printf("len2: %d\n", len2);

	// Check if the lengths differ and indicate it
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}

	return (0);
}
