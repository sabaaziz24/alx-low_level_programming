#include <stdio.h>

/**                                                                                                                                                                     
  * main - Prints 3 combination of numbers                                                                                                                              
  *                                                                                                                                                                     
  * Return: Always (Success)                                                                                                                                            
  */
int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			for (k = j + 1; k <= '9'; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);

				if (i != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
