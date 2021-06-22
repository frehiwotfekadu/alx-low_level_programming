#include "holberton.h"
/**
 * print_alphabet - prints the alphabet
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
int let;
for (let = 'a'; let <= 'z'; let++)
{
_putchar(let);
}
_putchar('\n');
}
