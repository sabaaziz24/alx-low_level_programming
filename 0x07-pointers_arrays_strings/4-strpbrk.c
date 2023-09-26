#include "main.h"

/**
 * _strpbrk - xx
 * @s: xx
 * @accept: xx
 *
 * Return: xx
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j = 0;

	while (s[j] != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (*(s + j) == accept[i])
				return (s + j);
		}

		j++;
	}

	return ('\0');
}
