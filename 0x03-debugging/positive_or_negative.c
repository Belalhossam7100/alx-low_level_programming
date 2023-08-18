#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * positive_or_negative - tset positive or negative
 *@i;number to be tested
 * Return: always 0
 */
void positive_or_negative(int i)
{

if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
}
else
{
printf("%d is negative\n", i);
}
}
