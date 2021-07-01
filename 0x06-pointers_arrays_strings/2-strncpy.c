#include "holberton.h"
/**
 * _strncpy - copies a string
 * @dest: string to be copied to
 * @src: string to be copied to dest
 * @n: maximum number of bytes to used
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for ( ; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
