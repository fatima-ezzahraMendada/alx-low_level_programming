#include "main.h"
/**
 *_pow_recursion -return the value of a raised to the power of b
 *@a: number integer
 *@b: power
 *
 *Return: result of the power
 */
int _pow_recursion(int a, int b)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (a * _pow_recursion(a, b - 1));
}
