#include <main.h>

/**
 * _puts_recursion -Prints a string follow by a line
 * @c: string
 *
 * Return: On sucess 1
 * On error -1 is return
 */
void _puts_recursion(char *c)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*c);
	_puts_recursion(s + 1);
}
