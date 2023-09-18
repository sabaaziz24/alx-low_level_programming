#include "main.h"

/**
 * _atoi - aa
 * @s: ss
 * Return: wahr
 */
int _atoi(char *s)
{
	int i = 0, n = 0, fir = 0, ans = 0, tmp;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			n++;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			tmp = s[i] - '0';
			ans = 10 * ans + tmp;
			fir = 1;
		}
		else if (fir)
			break;

		i++;

	}
	if (n % 2)
		return (-ans);

	return (ans);
}
