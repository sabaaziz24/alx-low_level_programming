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
	int i, j, flag = 0; sum = 0;

	for (i = 1; i < argc; i++)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
			{
				flag = 1;
				break;
			}
			j++;
		}
	}

	if (flag == 1)
	{
		printf("%s\n", "Error");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	return (0);
}
