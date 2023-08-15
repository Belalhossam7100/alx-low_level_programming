#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        printf("last digit of ");
                if (n > 5)
	{
		printf("last digit of %d is %d\n and is greater than 5", n, n%10);
	}
                else if (n == 0)
        {
		printf("last digit of %d is %d\n and is 0", n, n%10);
        }
                else if (n < 6 && n != 0)
        {
		printf("last digit of  %d is %d\n and is less than 6 and not 0", n, n%10);
        }
return (0);
}
