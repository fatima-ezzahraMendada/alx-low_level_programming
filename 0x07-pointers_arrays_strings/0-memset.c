#include <main.h>
#include <stdio.h>

/**
 *_memset function will add to  the memory a constant byte
 *@a: pointer to char value
 *@c: data to change
 *@k: index
 *return: *s
 */
char *_memset(char *a, char c, unsigned int k)
{
	unsigned int i;

	for (i = 0; i < k; i++)
	{
		a[i] = c;
	}
	return (a);
}
