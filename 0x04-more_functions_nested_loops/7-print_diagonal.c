#include "holberton.h"
#include <stdio.h>
/**
 * print_diagonal - hat draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 * Return: Always void
 */
void print_diagonal(int n)
{
int i;
int space;
for (i = 0; i < n; i++)
{
  for (space = 0; space < i; space++)
{
_putchar(' ');
}
_putchar('\\');

_putchar('\n');
}
