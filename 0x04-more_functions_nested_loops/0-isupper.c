#include "holberton.h"
#include <stdio.h>
/**
 * _isupper - checks for uppercase character
 * @c: represents a character
 * Return: Always 0
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
