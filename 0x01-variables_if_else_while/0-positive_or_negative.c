#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*
 * main : is a function
 * if n is postive print postive
 * if n is negative print negative
 * if n is zero print zero
 * return always (0)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
