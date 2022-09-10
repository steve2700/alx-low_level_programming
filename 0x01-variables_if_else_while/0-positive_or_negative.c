#include <stdio.h>
#include <stlib.h>
#include <time.h>
/**
 * main - print the positive or negative
 *
 * Description using the main function
 * this programme prints positive or negative
 * Return : 0
 */
int main(void)
{
int n;

srand(time(0));
n = rand() -RAND_MAX / 2;
if (n > 0)
{
	printf("%i is positive\n", n);
}
else if (n == 0)
{
	printf("%i is zero\n", n);
}
else if (n < 0)
{
	printf("%i is negative\n", n);
}
return (0);
}

