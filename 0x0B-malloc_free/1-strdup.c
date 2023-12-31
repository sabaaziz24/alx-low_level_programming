#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * _strdup - cc
 * @str: cc
 *
 * Return: result
 */

char *_strdup(char *str)
{
	char *p;
	unsigned int i, n = 0;

	if (str == NULL)
		return (NULL);

	while (str[n] != '\0')
		n++;
	n++;
	p = malloc(n * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		*(p + i) = *(str + i);
	}

	return (p);
}
