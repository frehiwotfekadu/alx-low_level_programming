#include "holberton.h"
#include <stdio.h>
/**
 * _isdigit -  that checks for a digit (0 through 9)
 * @c: represents an ASCII character to be checked
 * Return: Always 0
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
