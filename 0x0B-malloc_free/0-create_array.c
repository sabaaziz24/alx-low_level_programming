#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * create_array - cc
 * @size: cc
 * @c: cc
 *
 * Return: result
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = malloc(size * sizeof(char));
	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	return (p);
}
