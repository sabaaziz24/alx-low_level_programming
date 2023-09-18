#include "main.h"
#include "stdio.h"

/**
* rev_string - xx
* @s: sjb
* Return: coidss
*/
void rev_string(char *s)
{
	int i = 0, len;
	char *s2;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	for (i = len - 1; i >= 0; i--)
	{
		s2[len - i - 1] = s[i];
	}

	for (i = 0; i < len; i++)
	{
		s[i] = s2[i];
	}
}
