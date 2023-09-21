#include "main.h"
#include "stdio.h"

/**
 * *_strcat - aa
 * @*dest: ss
 * @*src: zz
 * Return: wahr
 */
char *_strcat(char *dest, char *src)
{
	int n1 = 0, n2 = 0, i;

	while (src[n1] != '\0')
		n1++;

	while (dest[n2] != '\0')
		n2++;

	for (i = n2; i < n2 + n1; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}
