#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	double d;
	char c;
	float f:
	long int d;
	long long int g;

	printf("Size of an int: %lu byte(s)\n",  sizeof(i));
	printf("Size of a float: %lu byte(s)\n",  sizeof(f));
	printf("Size of a char: %lu byte(S)\n",  sizeof(c));
	printf("Size of a long int: %lu byte(s)\n",  sizeof(d));
	printf("Size of a long long int: %ln byte(s)\n",  sizeof(g));
	return (0);
}
