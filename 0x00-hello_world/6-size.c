#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a4;
	long int a3;
	long long int a2;
	char a5;
	float a1;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a5));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a4));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(a3));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(a2));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(a1));
	return (0);
}
