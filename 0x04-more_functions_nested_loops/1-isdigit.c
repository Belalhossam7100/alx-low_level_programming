#include "main.h"
/**
 * _isdigit - function to check for the digit
 *
 * @c : the digit to check
 *
 * Return : 1 for digits
 * 
 * 0 for non-digits
 */

int _isdigit(int c)
{

if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
