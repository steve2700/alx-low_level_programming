#include <stdio.h>
/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 */
void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
}
