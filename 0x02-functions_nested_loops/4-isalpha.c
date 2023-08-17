#include "main.h"
/**
 * _islower - checks for lower case
 *@c : character to be checked
 *Return: if the character is lowercase ,otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
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
