#include <main.h>

/**
 *_memset function will add to  the memory a constant byte
 *@a: pointer to char value
 *@c: data to change
 *@k: index
 *
 *Return : array with the new value
 */
char *_memset(char *a, char c, unsigned int k)
{
	unsigned int i = 0;

	for (; k > 0; i++)
	{
		a[i] = c;
		i--;
	}
	return (a);
}
