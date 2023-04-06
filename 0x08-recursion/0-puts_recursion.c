#include "main.h"
#include <stdio.h>
/**
*_puts_recursion - function that prints string follow by line
*@c: input
*
*Return: void
*/
void _puts_recursion(char *c)
{
if (*c == '\0')
{
_putchar('\n');
return;
}
if (*c != '\0')
_putchar(*c);
_puts_recursion(c + 1);
}
