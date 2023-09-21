#include "main.h"

/**
 * print_number - so
 * @n: x
 *
 * Return: so
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
