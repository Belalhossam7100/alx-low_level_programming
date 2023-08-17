#include "main.h"
/**
 * _isalpha - checks for lower case and upper case
 *@c : character to be checked
 *Return: if the character is lowercase ,otherwise
 */
int _isalpha(int c)
{
if (c >= 'a' && c <= '2')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
