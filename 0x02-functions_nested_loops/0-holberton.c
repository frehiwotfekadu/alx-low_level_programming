#include <stdio.h>
#include <string.h>
/**
 * main - prints Holberton
 *
 * Return: Always 0
 */
int main(void)
{
int i;
char msg[] = "Holberton";
for (i = 0; i < strlen(msg); i++)
{
putchar(msg[i]);
}
putchar('\n');
return (0);
}
