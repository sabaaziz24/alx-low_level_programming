#include "main.h"
#include "stdio.h"

/**
* rev_string - xx
* @s: sjb
* Return: coidss
*/
void rev_string(char *s)
{
	char tmp;
	int i = 0, len1 = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	len1 = i - 1;

	for (i = 0; i < (len1 + 1) / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len1];
		s[len1--] = tmp;
	}
}
