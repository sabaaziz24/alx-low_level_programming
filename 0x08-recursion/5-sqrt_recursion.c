#include "main.h"

/**
 * _sqrt - xx
 * @prev: xx
 * @root: xx
 * Return: xx
 */
int _sqrt(int prev, int root)
{
	if (prev > root)
	{
		return (-1);
	}
	else if (prev * prev == root)
	{
		return (prev);
	}

	return (_sqrt(prev + 1, root));
}

/**
 * _sqrt_recursion - xx
 * @n: xx
 * Return: xx
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt(1, n));
}
