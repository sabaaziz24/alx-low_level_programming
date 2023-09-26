#include "main.h"

/**
 * _strchr - so
 * @c: df
 * @s: v
 *
 * Return: so
 */
char *_strchr(char *s, char c)
{
	unsigned int i=0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s+i);

	}

	return ('\0');
}
