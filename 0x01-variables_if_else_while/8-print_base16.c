#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Returns: Always 0
 */
int main(void)
{
int i;
char let;
for (i = '0'; i <= '9'; i++)
putchar(i);
for (let = 'a'; let <= 'f'; let++)
putchar(let);
putchar('\n');
return (0);
}
