#include <stdio.h>
/**
 * main - prints the alphabets in lowercase except q and e
 *
 * Return : always 0
 */
int main(void)
{
char let;
for (let = 'a'; let <= 'z'; let++)
{
if (let != 'e' && let != 'q')
putchar(let);
}
putchar('\n');
return (0);
}
