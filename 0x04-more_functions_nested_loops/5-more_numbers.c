#include "holberton.h"
#include <stdio.h>
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0
 */
void more_numbers(void)
{
int i = 0;
int j;
while (i < 10)
{
for (j = 0; j < 15; j++)
{
_putchar(j + '0');
}
_putchar('\n');
i++;
}
_putchar('\n');
}
