#include "main.h"
/**
 * _isalpha - checks for lower case and upper case
 *@c : character to be checked
 *Return: if the character is lowercase ,otherwise
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
