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
	unsigned int n1 = 0, n2 = 0, i;
	char *s;

	/* if NULL is passed, treat as an empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* While at index 0 */
	while (s1[n1] != '\0')
		n1++;
	while (s2[n2] != '\0')
		n2++;

	if (n >= n2)
		n = n2;

	/* Memory allocation */
	s = malloc(sizeof(char) * n + n1 + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < n1; i++)
		s[i] = s1[i];

	for (i = 0; i < n; i++)
		s[i + n1] = s2[i];

	s[i + n1] = '\0';

	return (s);
}
