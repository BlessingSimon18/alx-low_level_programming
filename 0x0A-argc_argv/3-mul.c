#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the multiplication of two integers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if true, 1 if false
 */

int main(int argc, char *argv[])
{
	int a, b;

	b = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (a = 1; a < argc; a++)
	{
		b = b * atoi(argv[a]);
	}
	printf("%d\n", b);
	return (0);
}
