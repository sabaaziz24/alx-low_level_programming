#include "main.h"

/**
 * _strchr - aa
 * @s: aa
 * @c: aa
 *
 * Return: aa
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');
}
