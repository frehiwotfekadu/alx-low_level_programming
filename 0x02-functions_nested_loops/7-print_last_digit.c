#include "holberton.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: number to print last digit of
 *
 * Return: the last digit as an int
 */
int print_last_digit(int n)
{
int val;
if (n < 0)
{
val = (n % 10) * -1;
}
else
{
val = n % 10;
}
_putchar(val + '0');
return (val);
}
