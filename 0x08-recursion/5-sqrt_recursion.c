#include "main.h"

/**
 * _sqrt_recursion - xx
 * @n: xx
 *
 * Return: string length
 */
int num, prev, start = 1;

int _sqrt_recursion(int n)
{
	if (start || (n - prev != -1))
	{
		num = n;
		start = 0;
	}
	if (n > 0)
	{
		if (n * n == num)
		{
			return (n);
		}
		else
		{
			prev = n;
			return  _sqrt_recursion(n - 1);
		}
	}
	else
	{
		return (-1);
	}
}
