#include "main.h"

/**
 * _memcpy - so
 * @dest: x
 * @src: df
 * @n: v
 *
 * Return: so
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);

	}

	return (dest);
}
