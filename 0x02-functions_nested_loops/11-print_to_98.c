#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Prints all natural numbers from input to 98,
 * in order seprated by a comma followed by a space.
 * @n: The number to begin counting at.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		for (n = n; n <= 97; n++)
			printf("%d,", n);
		printf("-98\n");
	}
	else
		for (n = n; n > 98 ; n--)
			printf("%d,", n);
	printf("98\n");
}
