#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @s: string whose length is to be measured
 * Return: Always 0
 */
int _strlen(char *s)
{
int i;
while (*(s + i))
{
i++;
}
return (i);
}
