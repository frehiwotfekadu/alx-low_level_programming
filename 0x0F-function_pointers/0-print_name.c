#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name string
 * @f: pointer to a function
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
{
f(name);
}
}
