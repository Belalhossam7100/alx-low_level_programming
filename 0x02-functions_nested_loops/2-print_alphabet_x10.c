#include "main.h"

/**
 * maiin - check the code
 *
 * Return: Always none
 */

void print_alphabet_x10(void)
{
int i;
int j;

for (i = 97; i <= 122; i++)
{
for (j = 0; i <= 5; j++)
{	
_putchar(i);
}
_putchar('\n');
}
return;
}
