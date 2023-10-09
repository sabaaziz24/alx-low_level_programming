#include "main.h"

/**
 * malloc_checked - al
 * @b: n
 * Return: p
 */
void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);
	if (str == NULL)
		exit(98);

	return (str);
}
