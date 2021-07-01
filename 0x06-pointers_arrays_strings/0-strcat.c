#include "holberton.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest - char [] to be appended to
 * @src - char [] to append to dest
 * Retrun: Always 0
 */
char *_strcat(char *dest, char *src)
{
int countDest = 0;
int countSrc = 0;
while (dest[countDest] != '\0')
{
countDest++;
}
while (src[countSrc] != '\0')
{
dest[countDest] += src[countSrc];
countSrc++;
countDest++;
}
dest += '\0';
return (dest);
}
