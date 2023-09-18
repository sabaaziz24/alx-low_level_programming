#include "main.h"
#include "stdio.h"

/**
* print_rev - xx
* @s: sjb
* Return: coidss
*/
void print_rev(char *s)
{
	int i = 0, len;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
