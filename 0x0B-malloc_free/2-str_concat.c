#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
 * str_concat - cc
 * @s1: cc
 * @s2: cc
 *
 * Return: result
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int i, n1 = 0, n2 = 0;

	if (s1 != NULL)
	{
		while (s1[n1] != '\0')
			n1++;
	}

	if (s2 != NULL)
	{
		while (s2[n2] != '\0')
			n2++;
		n2++;
	}

	p = malloc((n1 + n2) * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < (n1 + n2); i++)
	{
		if (i < n1)
			*(p + i) = *(s1 + i);
		else
			*(p + i) = *(s2 + i - n1);
	}

	return (p);
}
