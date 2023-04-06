#include "main.h"
/**
 *_strlen_recursion - Return length of string
 *@a: String to be measured
 *
 *Return: the length of the string as an integer
 */
int _strlen_recursion(char *a)
{
int l = 0;
if (*a)
{
l++;
l += _strlen_recursion(a + 1);
}
return (l);
}
