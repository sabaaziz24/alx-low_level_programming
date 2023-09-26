#include "main.h"

/**
 * _memset - so
 * @s: x
 * @b: df
 * @n: v
 *
 * Return: so
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;

	}

	return (s);
}
