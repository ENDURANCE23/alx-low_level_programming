#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main-print if the number is positive,zero,or negative
 *
 * Description: using the main function
 * this program prints "programming is positive,zero,or negative
 * Return:0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
	{
		print("Last digit of %i is %i and is greater than 5", n, n % 10);
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %i is %i and is zero", n, n % 10);
	}
	else if (n % 10 < 6 != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0", n, n % 10);
	}
	return (0);
}
