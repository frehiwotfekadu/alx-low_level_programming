#include "holberton.h"
#include <stdio.h>
/**
 * print_triangle - Print a triangle dependent on the parameter size
 * @size : The size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
int i;
int j;
int space;
for (i = 0; i < size; i++)
{
for (space = size - 1 - i; spaces > 0; spaces--)
{
_putchar(' ');
}
for (j = 0; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
if (size <= 0)
{
_putchar('\n');
}
}
