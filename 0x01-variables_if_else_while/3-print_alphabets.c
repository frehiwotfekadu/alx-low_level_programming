#include <stdio.h>
/**
 * main - prints in lowercase and then upperase of the alphabet
 *
 * Return : Always 0
 */
int main(void)
{
char up;
char low;
for (low = 'a'; low <= 'z'; low++)
putchar(low);
for (up = 'A'; up <= 'Z'; up++)
putchar(up);
putchar('\n');
return (0);
}
