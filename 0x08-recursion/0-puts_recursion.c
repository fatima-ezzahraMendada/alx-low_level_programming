#include "main.h"
/**
*_puts_recursion - function that prints string follow by line
*@c: input
*Return: always return 0 if sucess
*/
void _puts_recursion(char *c)
{
if (*c)
{
_putchar(*c);
_puts_recursion(c + 1);
}
else
_putchar('\n');
}
