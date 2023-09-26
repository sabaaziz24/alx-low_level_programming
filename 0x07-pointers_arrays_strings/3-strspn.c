#include "main.h"

/**
 * _strspn - aa
 * @s: aa
 * @accept: aa
 *
 * Return: aa
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, ans = 0, flag = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				ans++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (ans);
		}
	}

	return (0);
}
