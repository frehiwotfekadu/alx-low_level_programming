#include <stdio.h>
/**
 * main - prints Holberton
 *
 * Return: Always 0
 */
int main(void)
{
int i;
char msg[9] = "Holberton";
for (i = 0; i < 9; i++)
{
putchar(msg[i]);
}
putchar('\n');
return (0);
}
