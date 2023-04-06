#include <main.h>
/**
 *_memcpy is a fucntion that copies n bytes from the memory area
 *@dest: memory where it store
 *@src: memory where it copie
 *@n: byte
 *Return :copie the memory 
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
        unsigned int i;

	for(i=0; i < n; i++)
	{
	dest[i] = src[i];
	}
        return (dest);
}	
