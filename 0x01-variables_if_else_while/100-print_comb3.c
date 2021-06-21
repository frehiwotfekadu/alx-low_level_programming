#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * n is first digit and i is second digit
 * Return: Always 0
 */
int main(void)
{
int i;
for (i = 0; i <= 99; i++)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
if (i == 99)
break;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
