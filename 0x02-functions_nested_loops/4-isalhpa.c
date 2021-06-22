#include "holberton.h"
/**
 * _isalpha - check for alphabetical character
 * @c: integer from which to check whether references a letter or not
 * Return: Void.
 */
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
