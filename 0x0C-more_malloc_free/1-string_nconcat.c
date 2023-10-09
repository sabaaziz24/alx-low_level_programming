#include "main.h"

/**
 * string_nconcat - al
 * @s1: n
 * @s2: n
 * @n: n
 * Return: p
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int n1 = 0, n2 = 0, i = 0;
	char *p;

	while (s1[n1] != '\0')
	{
		n1++;
	}
	while (s2[n2] != '\0' && n2 <= n)
	{
		n2++;
	}

	p = malloc(n1+n2+1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < n1+n2; i++)
	{
		if (i < n1)
			p[i] = s1[i];
		else
			p[i] = s2[i - n1];
	}
	p[n1 + n2] = '\0';
	return (p);
}
