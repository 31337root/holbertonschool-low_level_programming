#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 * @argc: The number of command line arguments.
 * @argv: An array containing the program command line arguments.
 * Return: Success (0), failure (1);
*/

int main(int argc, char *argv[])
{
	int i, addi = 0;

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] > 47 && *argv[i] < 58)
		{
			addi += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", addi);
	return (0);
}
