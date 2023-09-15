#include "main.h"

/**
* print_diagonal - xx
*
* Return: coidss
*/
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0):
		_putchar('\n');
	for (j = 0; j < n; j++)
	{
		for (i = 0; i < j; i++)
		{
			_putchar(' ');
		}
		_putchar('\\')
		_putchar('\n');
	}
}
