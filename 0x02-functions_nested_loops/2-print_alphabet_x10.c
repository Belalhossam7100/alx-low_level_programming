#include "main.h"
#include <stdio.h>
/**
 * maiin - check the code
 *
 * Return: Always none
 */

void print_alphabet(void)
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
}
