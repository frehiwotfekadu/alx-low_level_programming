#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
 * print_array - prints n elements of an array of integers
 * @n:  the number of elements of the array to be printed
 * @a: an array
 * Return; Always 0
 */
void print_array(int *a, int n)
{
int i;
if (n > 0)
{
for (i = 0; n > i; i++)
{
if (i != n - 1)
{
printf{"%d, ", a[i]);
}
else
{
printf("%d", a[i]);
}
}
}
printf("\n");
}
