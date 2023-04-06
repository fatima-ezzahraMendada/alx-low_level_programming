#include "main.h"
/**
 *factorial - return factorial of number
 *@n :input integer
 *
 *Return: 1 if sucess and -1 on error
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
