#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - this is a function to print its name
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int num, sum = 0;

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (num > 0)
	{
		if (num >= 25)
		{
			sum += 1;
			num -= 25;
		}
		else if (num >= 10)
		{
			sum += 1;
			num -= 10;
		}
		else if (num >= 5)
		{
			sum += 1;
			num -= 5;
		}
		else if (num >= 2)
		{
			sum += 1;
			num -= 2;
		}
		else
		{
			sum += num;
			num = 0;
		}
	}
	printf("%d\n", sum);
	return (0);
}
