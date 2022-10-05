#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int h, i;

	i = 0;
	while (i < 10)
	{
		for (h = 'a'; h <= 'z'; h++)
		{
			putchar(h);
		}
		i++;
		putchar('\n');
	}
}
