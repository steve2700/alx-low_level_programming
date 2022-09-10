#include <stdio.h>
#include <stlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return - Always zero (success)
 */
int main(void)

{
	int n;

	srand(time(0);
	n = rand() -RAND_max / 2;
	if (n > 0)
	         printf("%d is positive\n" , n);
        else if (n == 0)
	         printf("%d is zero\n" , n);

        else
	         printf("%d is negative\n" ,n);
		 return 0;

}
