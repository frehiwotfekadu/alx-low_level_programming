#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100 but prints "Fizz" for multiples of 3
 * and "Buzz" for multiples of 5 and "FizzBuzz" for multiples of both
 * Return: Always 0
 */
int main(void)
{
int i = 1;
while (i < 101)
{
if ((i % 3 == 0 && (i % 5 == 0))
{
printf("FizzBuzz");
}
else if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", i);
}
if (i != 100)
{
printf(" ");
}
i++;
}
printf("\n");
return (0);
}
