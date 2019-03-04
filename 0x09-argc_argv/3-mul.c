#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 * @argc: The number of command line arguments.
 * @argv: An array contining the program command line arguments.
 * Return: Success 0, Failure 1.
*/

int main(int argc, char *argv[])
{

	if (argc > 1)
	{
		int multi = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", multi);
	}
	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
