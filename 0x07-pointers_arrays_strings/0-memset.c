#include "holberton.h"
/**
 * _memset - fills memory with constant type
 * @s: string to map
 * @b: characters to replace
 * @n: number of characters to replace
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
