#include "holberton.h"
/**
 * _islower - a function that checks for lowercase character.
 * @c: a character to be checked
 * Return: 1 if c is lowercase, otherwise returns 0
 */
int _islower(int c)
{
int lowercase;
if (c >= 97 && c <= 122)
{
lowercase = 1;
}
else
{
lowercase = 0;
}
return (lowercase);
}
